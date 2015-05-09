"""
	Author	: Arun Babu <Arun [D0T] Babu [At] Yahoo [D0T] com>
	
	This software is in public domain : http://en.wikipedia.org/wiki/Public_domain_software
"""

import os
import re
import sys
import random

### Mutation tricks ###

NULL_STRING = " "

mutation_trick = {
	" < " : 
		[ " != ", " > ", " <= ", " >= ", " == " ],
	" > " : 
		[ " != ", " < ", " <= ", " >= ", " == " ],
	"<=" : 
		[ " != ", " < ", " > ", " >= ",  "==" ],
	">=" : 
		[ " != ", " < ", " <= ", " > ",  "==" ],
	"==" : 
		[ " != ", " = ", " < ",  " > ", " <= ", " >= " ],
	"==" : 
		[ " != ", " = ", " < ",  " > ", " <= ", " >= " ],
	"!=" : 
		[ " == ", " = ", " < ",  " > ", " <= ", " >= " ],
	" = " : 
		[ " == ", " != ", " < ",  " > ", " <= ", " >= ", " = 0 * ", " = 0 ;//", " = NULL; //", " = ! " ],

	" + " : 
		[ " - ", " * ", " / ", " % " ],
	" - " : 
		[ " + ", " * ", " / ", " % " ],
	" * " : 
		[ " + ", " - ", " / ", " % " ],

	" / " : 
		[ " % ", " * ", " + ", " - " ],
 	" % " : 
		[ " / ", " + ", " - ", " * " ],

	" + 1" :
		[ " - 1", "+ 0", "+ 2", "- 2" ],
	" - 1" :
		[ " + 1", "+ 0", "+ 2", "- 2" ],

	" & " : 
		[ " | ", " ^ " ],
	" | " : 
		[ " & ", " ^ " ],
	" ^ " : 
		[ " & ", " | " ],

	" ~" : 
		[ " !", NULL_STRING ],
	" !" : 
		[ " ~", NULL_STRING ],

	" && " : 
		[ " & ", " || "," && !" ],

	" || " :
		[ " | ", " && ", " || !" ],

	" >> " : " << ",
	" << " : " >> ",

	" << 1" :
		[ " << 0"," << -1", "<< 2" ],
	" >> 1" :
		[ " >> 0", " >> -1", ">> 2" ],

	"++" : "--",
	"--" : "++",

	"++;" : 
		[ "--;", "+=2;", "-=2;" ],
	"++)" : 
		[ "--)", "+=2)", "-=2)" ],
	"--;" : 
		[ "++;", "+=2;", "-=2;" ],
	"--)" : 
		[ "++)", "+=2)", "-=2)" ],

	" true "  :  " false ",
	" false " :  " true  ",

	"if (" :
		[ "if ( ! ", "if ( ~ ", "if ( true || ", "if ( false && " ],
	"while (" :
		[ "while ( ! ", "while ( ~ ", "while ( false && " ],
	
	"break;" : "{;}",
	"continue;" : "{;}",

	"return " : 
		[ "return 0; //", "return 1; //", "return NULL; //", "return -1; //", "return 2* ", "return -1 * " ],


	# for embedded systems

	"0x0 " :
		[ "0x1 ", "0x5 ", "0xA ", "0xF " ],
	"0x1 " :
		[ "0x0 ", "0x5 ", "0xA ", "0xF " ],
	"0x5 " :
		[ "0x0 ", "0x1 ", "0xA ", "0xF " ],
	"0xA " :
		[ "0x0 ", "0x1 ", "0x5 ", "0xF " ],
	"0xF " :
		[ "0x0 ", "0x1 ", "0x5 ", "0xA " ],


	"0x00 " :
		[ "0x00 ", "0x55 ", "0xFF " ],
	"0x55 " :
		[ "0x00 ", "0xAA ", "0xFF " ],
	"0xAA " :
		[ "0x00 ", "0x55 ", "0xFF " ],
	"0xFF " :
		[ "0x00 ", "0x55 ", "0xAA " ],
	"[" :
		[ "[ -1 + ", "[ 1 + ", "[ 0 * " ],

	"(": " (! ",

	");":
		[ "*0);", "*-1);", "*2);" ],
	"," :
		[ ", ! ", ", 0 * ", ", -1 * ", ", 2 *" ],
	" ? " :
		[ " && false ? ", " || true ? " ],
	" int " :
		[" short int ", " char " ],
	" signed " : " unsigned ",
	" unsigned " : " signed ",
	" long " : 
		[ " int ", " short int ", " char " ],
	" float ": " int ",
	" double ": " int ",
}

def main (input_file, output_file = False ) :
#
	random.seed()

	source_code = open(input_file).read().split('\n')
	number_of_lines_of_code = len(source_code) 

	# try mutating a random line
	random_line = random.randint(0,number_of_lines_of_code)

	# shuffle mutant operators
	mutant_operators = mutation_trick.keys()
	random.shuffle(mutant_operators)

	mutated_line = "" 
	for i in range(random_line,number_of_lines_of_code) + range(0,random_line) :
	#
		# do not mutate preprocessor or assert statements
		if source_code[i].strip().startswith("#") or source_code[i].strip().startswith("assert") :
			continue

		for m in mutant_operators :
		#
			# search for substrings we can mutate
			number_of_substrings_found = source_code[i].count(m)

			if number_of_substrings_found > 0 :
			#
				mutate_at_index = 0 
		
				# if more than one substrings are found
				# then : choose any one randomly

				random_substring = random.randint(1,number_of_substrings_found)
				for r in xrange(1,random_substring+1) :
				#
					if mutate_at_index == 0 :
						mutate_at_index = source_code[i].index(m)
					else :
						mutate_at_index = source_code[i].index(m,mutate_at_index+1)
				#

				# if there is more than one way of mutating a substring
				# then : choose any one randomly
				if type(mutation_trick[m]) == str :
					mutate_with = mutation_trick[m]
				else :	
					mutate_with = mutation_trick[m][random.randint(0,len(mutation_trick[m])-1)]

				sys.stderr.write("\n==> @ Line: "+str(i+1)+"\n\n")
				sys.stderr.write("Original Line  : "+source_code[i].strip()+"\n")

				mutated_line = source_code[i][0:mutate_at_index] + source_code[i][mutate_at_index:].replace(m,mutate_with,1)

				sys.stderr.write("After Mutation : "+mutated_line.strip()+"\n")

				if output_file :
					write_to_file (output_file, source_code, i, mutated_line)
					sys.stderr.write("\nOutput written to "+output_file+"\n")

				sys.stderr.write("\n")
				return
			#
		#
	#
	sys.stderr.write("Could not create a mutant. Please make sure it is a C file.\n")
	sys.stderr.write("You may need to indent your C file.\n")
#

def write_to_file ( mutant_file_name, source_code, mutated_line_number, mutated_line ) :
#
	output_file = open(mutant_file_name, "w")

	for i in xrange(0,len(source_code)) :
		if i == mutated_line_number : 
			output_file.write("/* XXX: original code was : "+source_code[i]+" */\n")
			output_file.write(mutated_line+"\n")
		else :
			output_file.write(source_code[i]+"\n")

	output_file.close()
#

if __name__ == "__main__":
#
	if len(sys.argv) == 2: # For testing 
		main(sys.argv[1]) 

	elif len(sys.argv) == 3: 
		assert(sys.argv[1] != sys.argv[2]) # Input file and Output file cannot be same
		main(sys.argv[1],sys.argv[2]) 

	else:
		print "Usage: python mutate.py <file-to-mutate.c> [output-mutant-file-name.c]"
#
