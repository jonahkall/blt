

#include "/home/tslilyai/blt/blt_args.hpp"
#include <cstdlib>
#include <cstdio>
#include <climits>
#include <cfloat>
#include <string>

unsigned intCnt = 0;
int ints [] = { 0, INT_MIN, 0, 36, 8, INT_MAX, INT_MIN, INT_MAX, INT_MIN, -9, INT_MAX, 0, -14, 0, -37, 0, -15, INT_MAX, 0, INT_MAX, -37, 0, 0, INT_MIN, INT_MIN, INT_MAX, -23, 0, -50, INT_MIN, INT_MIN, 0, INT_MAX, INT_MIN, 17, -37, 23, 13, 8, INT_MIN, INT_MAX, INT_MAX, INT_MIN, INT_MAX, 0, -28, 48, 12, 14, 0, 0, 12, INT_MAX, -22, INT_MAX, -29, INT_MIN, 17, INT_MAX, -44, 1, INT_MIN, INT_MIN, 0, 0, INT_MAX, INT_MIN, INT_MIN, 41, INT_MIN, -15, 0, -40, -1, -27, INT_MAX, -27, 0, -42, INT_MIN, INT_MAX, -40, INT_MAX, INT_MIN, 14, INT_MAX, 0, INT_MAX, -40, INT_MIN, -43, -49, INT_MIN, -28, INT_MAX, -42, 0, -47, -41, 0, -36, INT_MAX, INT_MAX, 7, INT_MAX, 31, -37, INT_MIN, -39, INT_MIN, INT_MIN, INT_MIN, INT_MIN, 23, 45, 0, INT_MAX, INT_MAX, INT_MAX, -49, 36, INT_MAX, 0, 0, 35, -27, INT_MAX, 0, INT_MIN, 14, INT_MAX, 3, 26, 0, INT_MIN, INT_MIN, 6, INT_MIN, 0, 0, INT_MIN, INT_MIN, INT_MIN, INT_MIN, -4, 37, -43, INT_MAX, -22, INT_MIN, INT_MAX, 0, INT_MIN, INT_MIN, 0, 0, -46, INT_MIN, INT_MAX, -9, INT_MIN, 0, -3, -29, 42, INT_MAX, 0, -35, 0, INT_MIN, 0, INT_MIN, -50, 0, INT_MIN, INT_MAX, INT_MAX, 0, 0, -2, 17, INT_MIN, INT_MIN, INT_MAX, INT_MAX, -19, 0, INT_MAX, 1, INT_MIN, 0, INT_MAX, INT_MAX, 0, INT_MIN, -20, 0, -6, INT_MAX, INT_MIN, INT_MIN, -47, 2, 8, 0, 5, INT_MAX, INT_MIN, 13, 0, 29, INT_MIN, INT_MIN, -40, 12, 0, 23, 0, -39, INT_MIN, 0, INT_MIN, 31, 0, -25, 1, 0, INT_MIN, 0, INT_MIN, INT_MIN, 1, -33, INT_MAX, 0, INT_MAX, 0, -9, 0, 16, INT_MAX, INT_MIN, INT_MIN, -19, INT_MIN, 0, 22, INT_MAX, INT_MIN, INT_MIN, INT_MAX, 11, INT_MIN, INT_MIN, -31, INT_MAX, -3, -14, 3, 5, 0, 0, INT_MAX, INT_MIN, INT_MAX, -43, 11, -17, 46, 29, -13, -5, INT_MIN, INT_MAX, -20, 0, 0, 21, 2, 0, -29, 0, -16, -40, 0, INT_MIN, 0, INT_MAX, -6, INT_MIN, 0, INT_MIN, -20, INT_MIN, INT_MIN, INT_MIN, 0, 46, 0, INT_MIN, -47, 0, INT_MAX, 6, INT_MIN, INT_MIN, INT_MAX, 3, -43, 43, 49, -3, 23, 0, INT_MAX, 0, 26, 0, INT_MIN, INT_MIN, 0, INT_MAX, INT_MIN, 0, INT_MAX, INT_MIN, -7, INT_MAX, INT_MIN, INT_MIN, 31, 40, INT_MAX, INT_MAX, -24, 34, INT_MIN, 0, INT_MAX, INT_MIN, INT_MIN, -42, 0, 36, INT_MIN, -12, 29, INT_MAX, 0, -23, INT_MIN, 0, 45, INT_MAX, 0, 28, INT_MAX, -34, 0, 7, INT_MAX, 42, 0, INT_MIN, INT_MIN, INT_MIN, INT_MIN, 0, 49, 0, INT_MIN, 42, INT_MAX, -38, INT_MIN, -18, INT_MIN, 12, INT_MIN, 0, INT_MIN, -37, INT_MAX, -4, 13, -7, INT_MAX, -9, INT_MIN, INT_MAX, 41, 43, INT_MAX, 22, -1, INT_MAX, 44, -10, 40, INT_MAX, 43, -47, -4, 13, INT_MIN, 0, INT_MAX, INT_MAX, INT_MIN, 0, 19, INT_MAX, INT_MAX, INT_MIN, -27, INT_MIN, INT_MIN, 11, 0, -50, 0, INT_MAX, 34, INT_MIN, INT_MIN, 0, INT_MAX, -1, 0, 0, 0, -46, INT_MIN, -13, 0, INT_MIN, INT_MIN, INT_MAX, -45, INT_MAX, INT_MAX, 10, INT_MIN, INT_MIN, 27, 18, INT_MIN, -16, INT_MAX, -16, INT_MIN, -6, INT_MIN, INT_MAX, INT_MIN, -44, 18, -32, INT_MAX, 0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 0, INT_MAX, 0, -40, INT_MAX, -12, 0, INT_MAX, 0, INT_MAX, INT_MAX, INT_MAX, 0, INT_MAX, 28, INT_MAX, INT_MIN, 0, INT_MIN, 0, INT_MIN, INT_MIN, -4, INT_MIN, 10, 0, INT_MAX, 19, INT_MIN, 0, INT_MIN, INT_MIN, 0, 46, 0, 7, INT_MIN, 3, 0, INT_MAX, 35, -20, 16, INT_MAX, INT_MAX, 13, INT_MIN, -10, INT_MAX, -28, -35, INT_MIN, INT_MIN, INT_MIN, 0, 8, 24, INT_MAX, 0, INT_MIN, 0, 0, INT_MIN, INT_MAX, 0, 5, 0, 0, 0, -25, INT_MAX, INT_MIN, 0, 0, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 0, 0, INT_MIN, 31, -5, INT_MIN, 30, 24, 20, INT_MIN, -3, INT_MAX, -21, INT_MIN, 0, 2, INT_MIN, INT_MAX, 25, INT_MIN, INT_MAX, -39, INT_MIN, 0, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 0, INT_MIN, 15, 0, INT_MAX, -15, INT_MAX, 39, 18, INT_MAX, INT_MAX, 17, INT_MAX, -24, INT_MIN, INT_MIN, -23, 7, 20, INT_MAX, INT_MIN, 1, 1, INT_MIN, 21, -32, 0, 27, -14, -14, -18, INT_MIN, -49, INT_MIN, INT_MIN, -29, INT_MAX, -13, INT_MIN, 0, INT_MAX, -41, INT_MAX, INT_MIN, INT_MAX, -45, INT_MAX, -20, INT_MAX, 24, INT_MAX, -15, 0, INT_MIN, INT_MIN, INT_MIN, 0, 14, 0, 0, -1, INT_MAX, INT_MIN, INT_MAX, 22, 0, 37, 45, 1, INT_MAX, INT_MAX, -3, 0, 0, INT_MIN, -25, -39, 0, INT_MAX, INT_MIN, 0, 5, 17, -13, 16, 31, 0, INT_MAX, INT_MAX, INT_MIN, -20, INT_MIN, -11, INT_MIN, 0, -24, INT_MAX, 40, INT_MAX, INT_MAX, INT_MIN, -42, INT_MIN, 46, INT_MAX, 0, 0, INT_MAX, INT_MAX, -18, -24, 9, 0, -4, INT_MIN, -22, INT_MAX, 0, INT_MIN, INT_MAX, INT_MAX, -16, 0, 40, 0, -5, 9, -40, INT_MIN, 42, INT_MAX, -45, 39, INT_MIN, 0, 0, 0, INT_MIN, -30, 2, INT_MAX, 0, -17, INT_MIN, -50, 13, INT_MAX, 0, 16, -4, -29, INT_MIN, 30, 0, INT_MAX, -29, INT_MIN, 42, INT_MIN, -45, 0, INT_MAX, 0, 0, -2, 13, 0, INT_MIN, 1, 45, -29, 0, 0, -22, INT_MAX, INT_MAX, INT_MAX, 0, INT_MAX, INT_MIN, INT_MIN, -1, 44, INT_MAX, 32, INT_MAX, 0, INT_MIN, 0, INT_MIN, -36, 0, 22, 0, -37, 42, INT_MIN, 0, INT_MIN, -29, INT_MIN, INT_MIN, INT_MAX, INT_MAX, 31, -10, INT_MIN, INT_MIN, 0, INT_MAX, -30, 4, INT_MIN, -36, INT_MAX, INT_MIN, INT_MIN, 14, -31, -4, 14, 0, INT_MIN, 1, 3, INT_MAX, 0, -6, 12, 0, -26, 3, -28, INT_MIN, 26, INT_MIN, 0, INT_MIN, -46, -13, 0, 0, INT_MIN, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 0, INT_MAX, INT_MAX, 0, INT_MIN, 0, -48, 0, -35, 48, 29, 49, INT_MIN, INT_MIN, 27, INT_MIN, 8, INT_MIN, INT_MAX, INT_MIN, INT_MAX, INT_MAX, -33, 0, INT_MAX, 0, 3, -2, -8, 0, 50, INT_MIN, INT_MIN, INT_MAX, INT_MIN, 0, INT_MIN, 0, 11, INT_MAX, 0, 0, -14, INT_MAX, INT_MAX, 0, -12, 0, INT_MIN, -12, 0, 0, 0, INT_MIN, 42, -50, -1, -49, 16, INT_MIN, INT_MAX, 1, INT_MAX, INT_MIN, 0, -33, INT_MAX, -50, 26, 39, 44, -32, INT_MAX, INT_MAX, INT_MIN, 35, -22, INT_MIN, -2, INT_MAX, INT_MIN, -33, 0, INT_MIN, 0, INT_MIN, INT_MAX, 1, -17, -1, -18, INT_MAX, INT_MAX, 0, INT_MAX, 37, -46, -20, -41, 44, 44, INT_MAX, 24, INT_MIN, INT_MIN, 0, INT_MAX, 25, 0, -7, INT_MIN, -14, -46, 0, INT_MIN, INT_MIN, INT_MAX, INT_MIN, INT_MIN, INT_MAX, INT_MAX, 12, 45, -27, -1, 15, INT_MAX, -35, -34, INT_MIN, 47, INT_MAX, -50, INT_MAX, INT_MIN, -20, INT_MIN, -21, 33, INT_MIN, 0, 0, 0, INT_MIN, INT_MAX, INT_MIN, -46, -1, 17, INT_MAX, INT_MIN, 0, 41, 36, -23, 0, INT_MIN, INT_MAX, INT_MIN, INT_MIN, 43, 0, INT_MAX, 11, 0, 12, INT_MIN, INT_MAX, INT_MIN, INT_MAX, INT_MIN, INT_MIN, 0, INT_MIN, 8, INT_MIN, 0, INT_MAX, INT_MAX, 46, 0, -4, INT_MIN, INT_MIN, 31, -5, 0, INT_MIN, INT_MIN, 44, -3, 36, INT_MAX, -23, INT_MAX, INT_MAX, INT_MAX, INT_MIN, 19, INT_MAX, INT_MIN, 0, 0, 0, -34, INT_MIN, INT_MAX, 23, 0, INT_MIN, -38, -29, -39, INT_MIN, 13, 0, 0, INT_MAX, 0, 0, 19, INT_MAX, INT_MAX, 0, INT_MAX, INT_MIN, 0, -44, INT_MAX, 0, -13, -1, -45, 0, INT_MIN, 0, 0, 23, INT_MIN, INT_MAX, INT_MIN, -44, INT_MIN, 0, 41, INT_MAX, INT_MAX, 41, -50, INT_MAX, 19, INT_MAX, -10, INT_MIN, INT_MAX, -5, INT_MIN, INT_MAX, -20, 0, 0, -6, 0, -47, 0, -14, 0, INT_MAX, INT_MAX, INT_MAX, INT_MAX, -12, -25, INT_MAX, -41, -2, 38, -19, INT_MIN, 0, INT_MAX, 34, 22, INT_MIN, 0, 34, INT_MAX, 30, 48, 0, INT_MIN, 0, INT_MIN, 0, 20, INT_MAX, INT_MIN, 0, INT_MIN, -23, 0, 13, 0, INT_MIN, -44, -41, 0, INT_MAX, INT_MIN, 0, 0, 0, INT_MIN, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 17, INT_MAX, INT_MAX, 0, INT_MIN, 3, 0, -10, 21, INT_MIN, INT_MAX, INT_MAX, 20, -17, -31, -47, INT_MAX, -22, 0, INT_MIN, 23, INT_MIN, INT_MAX, INT_MIN, -46, -39, 17, INT_MIN, INT_MAX, INT_MIN, 41, -12, -3, -48, INT_MAX, INT_MAX, INT_MAX, 0, 0, 22, 47, -19, -35, INT_MAX, 0, -13, INT_MIN, 0, INT_MAX, INT_MIN, 0, 0, INT_MIN, 34, 1, 27, INT_MAX, -2, 0, INT_MIN, 0, 0, INT_MIN, -6, 0, INT_MIN, 0, 8, 0, -4, 0, -40, -47, INT_MAX, INT_MAX, -37, 0, INT_MIN, INT_MAX, -32, INT_MAX, INT_MIN, 0, 0, 47, INT_MIN, 26, 0, -47, INT_MAX, 0, 49, -6, -28, INT_MIN, INT_MAX, -15, INT_MAX, -4, 0, -43, 13, INT_MIN, INT_MIN, 41, 33, INT_MAX, INT_MIN, -7, -4, 0, 11, 0, 0, INT_MIN, INT_MIN, INT_MAX, -29, -17, INT_MIN, INT_MAX, 0, INT_MAX, INT_MIN, -23, -13, INT_MAX, INT_MIN, INT_MIN, 34, -1, -17, -20, 0, 0, INT_MAX, -34, 0, INT_MIN, -30, -34, 12, 0, INT_MIN, 6, 0, INT_MAX, INT_MIN, INT_MAX, 18, 0, 0, 19, 47, INT_MIN, 0, INT_MIN, -11, INT_MIN, INT_MAX, -49, INT_MAX, INT_MIN, -5, INT_MIN, INT_MAX, INT_MIN, 0, INT_MAX, 0, 0, 6, INT_MAX, 0, -32, INT_MIN, 0, INT_MIN, -25, INT_MAX, -23, INT_MAX, 0, 0, INT_MAX, 0, 22, INT_MIN, 13, 0, INT_MAX, -13, 0, INT_MAX, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MAX, 0, INT_MAX, 38, INT_MIN, 33, 41, 27, 0, -13, INT_MIN, 11, 0, INT_MIN, INT_MIN, INT_MIN, INT_MIN, 0, 0, 36, INT_MIN, 0, 0, INT_MAX, 0, 1, -7, -50, INT_MAX, 19, 16, 17, 34, INT_MIN, INT_MAX, INT_MIN, 30, -44, 0, -38, INT_MIN, 41, 24, INT_MIN, 42, 0, INT_MAX, INT_MAX, -38, 0, INT_MAX, 0, 0, 26, INT_MIN, INT_MIN, INT_MAX, INT_MIN, INT_MIN, 0, 0, 35, INT_MAX, -46, -49, INT_MIN, INT_MIN, 29, INT_MIN, 0, INT_MIN, 19, -9, 0, INT_MAX, INT_MIN, INT_MAX, -32, 20, 0, 0, INT_MIN, 0, 0, INT_MAX, -46, INT_MIN, -12, 38, 0, -45, INT_MAX, INT_MAX, 48, INT_MAX, -16, 0, -22, 40, 45, 0, 30, INT_MAX, INT_MAX, 0, INT_MAX, 40, INT_MIN, INT_MIN, INT_MIN, INT_MIN, 0, 13, 0, INT_MAX, INT_MIN, INT_MIN, 0, INT_MAX, INT_MIN, INT_MAX, -28, 23, 0, 0, INT_MAX, -39, INT_MAX, -1, -3, INT_MAX, -15, -2, -45, 48, -2, INT_MIN, 0, INT_MAX, INT_MAX, INT_MAX, 0, 0, 0, 0, -15, INT_MIN, INT_MAX, 41, 0, -32, INT_MAX, 24, 41, 0, INT_MIN, 28, -46, INT_MAX, -17, INT_MAX, 0, INT_MAX, INT_MIN, INT_MAX, INT_MAX, INT_MAX, INT_MIN, 4, 4, 28, 22, INT_MAX, 17, 7, INT_MIN, -50, -2, 0, INT_MAX, INT_MAX, 0, INT_MAX, 0, INT_MIN, INT_MIN, 35, -4, INT_MIN, INT_MIN, 0, -23, 10, INT_MAX, 24, 0, 1, 1, INT_MAX, 0, INT_MAX, INT_MIN, 7, 0, INT_MIN, INT_MAX, INT_MAX, INT_MIN, 30, 43, INT_MIN, -29, INT_MAX, INT_MAX, 44, 0, -44, INT_MAX, 11, 0, -23, 14, INT_MIN, 0, INT_MIN, INT_MAX, 0, 0, -42, 39, -50, 26, 0, -15, -8, 26, INT_MAX, 0, 43, 0, 0, 4, 0, -42, INT_MIN, INT_MAX, -22, 2, 0, -30, 1, INT_MIN, INT_MIN, INT_MIN, -26, INT_MAX, -21, INT_MIN, -10, 47, 0, INT_MIN, INT_MIN, 0, 0, 3, 0, INT_MIN, INT_MAX, 25, -1, INT_MIN, 0, 37, -8, INT_MAX, 36, 25, -45, -30, 3, 0, -42, -19, 43, 0, 41, INT_MAX, 0, INT_MIN, 0, INT_MAX, INT_MAX, INT_MIN, -13, 0, INT_MAX, 20, 0, 0, INT_MAX, INT_MIN, INT_MAX, -20, 0, INT_MAX, INT_MAX, -48, 14, -42, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MAX, 11, -49, INT_MAX, INT_MIN, INT_MIN, INT_MIN, 49, INT_MAX, 0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 37, 22, -33, -45, 0, INT_MIN, 19, -11, INT_MIN, 0, INT_MIN, INT_MAX, 0, 16, INT_MAX, INT_MIN, 25, INT_MIN, INT_MAX, INT_MAX, 7, 37, -36, 1, INT_MAX, INT_MAX, 38, INT_MIN, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MIN, 19, -24, INT_MAX, INT_MIN, 5, 37, 21, INT_MAX, -18, INT_MAX, INT_MIN, 0, 0, INT_MAX, 16, 0, INT_MIN, 3, 0, -19, INT_MIN, INT_MAX, 22, INT_MIN, -48, INT_MAX, 0, INT_MAX, 7, INT_MIN, -49, 32, 37, INT_MAX, 0, 46, 0, 39, 9, INT_MAX, INT_MIN, INT_MAX, -41, INT_MAX, INT_MAX, INT_MIN, -40, 6, 0, -16, -16, 0, -17, 5, 30, -6, -41, INT_MAX, INT_MAX, INT_MAX, 0, 24, 37, INT_MAX, 5, INT_MIN, -38, 11, 0, INT_MIN, -8, INT_MAX, -36, -4, -41, 0, 40, -38, 0, 0, INT_MAX, INT_MIN, 0, 29, 33, 0, 0, INT_MAX, 22, 14, 25, INT_MAX, 5, 4, -12, 0, INT_MAX, 29, 0, 0, 0, 0, INT_MAX, 28, 45, INT_MIN, INT_MIN, 0, INT_MAX, -30, INT_MIN, 26, INT_MIN, INT_MIN, 42, INT_MIN, INT_MIN, INT_MAX, 2, INT_MIN, INT_MIN, 49, 2, INT_MAX, 0, -5, 35, 0, INT_MAX, INT_MAX, -47, -18, -10, 46, 18, -29, -17, INT_MAX, 0, INT_MIN, INT_MAX, INT_MAX, INT_MIN, 0, 0, -14, INT_MAX, 0, 0, 8, -13, INT_MAX, INT_MIN, 0, INT_MIN, -10, -12, INT_MAX, INT_MAX, INT_MAX, 0, INT_MIN, 15, INT_MAX, INT_MIN, 0, 0, 0, 20, INT_MIN, 17, INT_MIN, 18, 0, 0, INT_MIN, INT_MAX, 0, -4, 0, INT_MAX, INT_MIN, -11, INT_MIN, INT_MIN, -14, INT_MIN, INT_MIN, 0, 8, -13, INT_MAX, INT_MIN, -13, 0, 0, INT_MAX, INT_MIN, 45, INT_MAX, 0, INT_MIN, 0, INT_MIN, INT_MAX, 0, 0, 0, -39, INT_MAX, 0, INT_MAX, -17, 16, -20, 34, 0, INT_MIN, 0, -12, 30, INT_MIN, -42, INT_MAX, 30, INT_MAX, -36, INT_MAX, 0, 17, INT_MIN, 34, INT_MAX, INT_MAX, INT_MIN, 0, INT_MAX, -21, 11, 0, -25, INT_MIN, INT_MAX, -16, 0, 0, -11, 38, INT_MIN, INT_MIN, 13, INT_MIN, 14, 0, INT_MIN, 5, INT_MAX, 36, INT_MIN, 42, INT_MIN, 0, 0, 49, 0, -32, 0, 0, -34, INT_MAX, INT_MAX, INT_MAX, 0, INT_MIN, INT_MAX, INT_MAX, 46, -50, -7, 0, -7, INT_MAX, 38, 9, INT_MIN, INT_MIN, -7, 0, 0, INT_MIN, 25, INT_MAX, -23, 0, INT_MAX, -46, INT_MAX, 13, -33, -33, INT_MAX, INT_MAX, 8, 20, 0, 37, -42, INT_MIN, -16, -27, -12, INT_MIN, 33, INT_MIN, INT_MIN, 0, -42, INT_MIN, INT_MIN, INT_MIN, -43, 0, INT_MIN, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 0, 0, INT_MAX, 0, 0, INT_MIN, 0, INT_MAX, INT_MAX, INT_MAX, -40, INT_MIN, -19, INT_MIN, INT_MIN, INT_MAX, INT_MIN, INT_MAX, INT_MAX, 7, INT_MIN, INT_MAX, 0, 17, INT_MIN, INT_MAX, -13, 13, -2, INT_MIN, INT_MAX, -47, INT_MAX, 0, INT_MIN, INT_MIN, INT_MAX, -24, INT_MAX, -22, 34, 12, INT_MIN, INT_MIN, -37, 48, INT_MIN, INT_MIN, -9, INT_MAX, -33, 0, -26, 17, -4, 11, INT_MAX, 0, INT_MAX, 5, 0, -4, 0, 0, -20, INT_MAX, 46, 22, INT_MIN, -14, -30, INT_MIN, 18, 0, INT_MAX, INT_MIN, 18, INT_MIN, 0, INT_MIN, INT_MAX, INT_MIN, 38, INT_MIN, 39, 0, INT_MAX, 2, INT_MIN, INT_MIN, -14, 38, -35, INT_MIN, 9, INT_MAX, INT_MIN, -40, INT_MAX, -12, -5, 0, 0, INT_MIN, INT_MAX, 0, 4, 15, 36, 16, INT_MIN, INT_MAX, 0, 11, INT_MIN, INT_MIN, 0, -9, 0, -8, INT_MAX, INT_MAX, 0, INT_MIN, 0, INT_MIN, INT_MAX, 45, INT_MIN, 0, 0, INT_MAX, INT_MAX, 0, INT_MAX, -48, INT_MIN, 39, 0, INT_MIN, INT_MIN, 0, 0, INT_MAX, 0, 0, INT_MAX, 4, INT_MIN, INT_MAX, -17, 0, -49, -26, 41, 5, -4, 0, 0, 0, INT_MIN, -2, INT_MIN, 47, 16, 0, INT_MIN, INT_MIN, 24, 0, -8, 39, INT_MIN, 0, 0, INT_MIN, 0, -30, -11, -12, INT_MIN, 0, INT_MIN, INT_MAX, 0, 0, 1, 17, INT_MIN, -14, 29, -35, 0, INT_MAX, 4, -9, -16, -21, -41, INT_MIN, INT_MAX, -40, 0, INT_MIN, 0, INT_MIN, INT_MIN, INT_MAX, INT_MIN, INT_MAX, INT_MIN, 39, 0, 24, INT_MIN, INT_MIN, 13, INT_MIN, INT_MAX, 0, -12, -23, -41, 25, 0, 42, INT_MAX, 0, INT_MIN, 0, INT_MIN, INT_MAX, 28, INT_MIN, 41, 50, INT_MIN, INT_MIN, 0, INT_MAX, -25, 35, -6, 43, INT_MIN, INT_MAX, 0, INT_MAX, -49, 10, -22, INT_MAX, INT_MAX, -39, -21, -41, INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, -3, -11, 48, INT_MIN, 0, 0, -27, INT_MAX, -41, 25, INT_MIN, 34, 36, -6, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MAX, 0, 21, INT_MIN, INT_MAX, 0, 0, INT_MIN, INT_MIN, INT_MIN, INT_MAX, 9, INT_MAX, INT_MIN, INT_MAX, INT_MIN, INT_MAX, -37, 0, 5, 0, 0, 0, 0, INT_MAX, INT_MIN, 48, -21, 0, 4, 0, 0, 0, INT_MIN, 0, INT_MAX, 15, 0, INT_MIN, 39, 0, INT_MAX, INT_MIN, 40, -10, INT_MIN, -13, INT_MAX, 39, -20, INT_MIN, 47, INT_MAX, -27, INT_MAX, 10, INT_MAX, -45, -9, 14, 0, INT_MAX, INT_MAX, 0, INT_MAX, INT_MAX, -48, 0, -38, 33, 16, INT_MAX, 17, 42, INT_MAX, -26, INT_MIN, 1, 35, INT_MIN, -30, 0, 0, INT_MAX, INT_MIN, INT_MAX, 0, 0, INT_MAX, 2, INT_MIN, INT_MAX, INT_MIN, 48, 0, 0, INT_MIN, INT_MIN, 0, INT_MAX, 33, INT_MAX, -2, INT_MAX, 47, 33, 0, -43, 0, 39, 0, INT_MAX, -50, 24, 0, INT_MIN, INT_MIN, 0, INT_MAX, 4, 0, INT_MAX, 7, 42, 0, -7, INT_MIN, 30, 32, -11, INT_MIN, -2, -28, 0, INT_MIN, 9, INT_MIN, 0, INT_MAX, INT_MAX, INT_MIN, 0, 0, INT_MIN, 19, 0, -46, -40, INT_MIN, 0, INT_MIN, 0, INT_MAX, INT_MAX, 5, -45, -49, INT_MIN, -6, -47, 0, -12, INT_MAX, 45, -39, INT_MAX, INT_MIN, 0, -15, 32, 25, 0, INT_MIN, -24, INT_MAX, INT_MAX, 0, INT_MAX, INT_MAX, 0, INT_MAX, INT_MIN, 42, 24, 0, INT_MAX, 0, 0, -24, INT_MIN, 39, -50, 0, INT_MAX, 21, 16, INT_MIN, INT_MIN, INT_MIN, 30, 0, INT_MAX, 5, 0, INT_MIN, INT_MIN, 33, -24, INT_MAX, INT_MIN, INT_MIN, INT_MIN, INT_MAX, INT_MIN, 47, -20, INT_MAX, 15, INT_MAX, 0, INT_MIN, INT_MIN, INT_MAX, INT_MIN, 24, 28, INT_MAX, 0, 18, 46, INT_MAX, 6, INT_MAX, -29, 0, -30, INT_MAX, INT_MIN, 0, INT_MAX, 2, 36, 25, INT_MAX, -45, INT_MIN, -21, INT_MIN, 11, INT_MIN, 5, INT_MIN, INT_MAX, 16, 0, 0, 0, -3, INT_MIN, 0, INT_MIN, 48, INT_MAX, -21, -12, INT_MIN, -26, 0, INT_MAX, INT_MIN, INT_MAX, 0, INT_MAX, 44, -30, INT_MIN, 0, INT_MIN, INT_MIN, INT_MAX, -50, INT_MAX, INT_MIN, 29, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MAX, 0, 0, INT_MIN, 34, INT_MAX, INT_MAX, -28, 0, 0, 0, INT_MIN, 0, 25, 44, -2, INT_MIN, -6, INT_MIN, 0, 0, INT_MIN, -11, 0, INT_MAX, INT_MIN, INT_MAX, 10, 0, -36, INT_MIN, 0, 18, 43, -22, INT_MIN, 0, INT_MAX, 0, -10, -20, 0, INT_MAX, 0, -46, INT_MAX, INT_MIN, INT_MIN, INT_MAX, -29, 33, 30, 31, -34, INT_MAX, 0, -18, 0, 10, 18, 2, 0, -40, 0, 0, INT_MIN, INT_MIN, INT_MAX, -49, 0, -20, INT_MAX, -27, 0, 0, 0, INT_MIN, 0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 40, 0, INT_MAX, 0, INT_MIN, INT_MIN, -50, INT_MAX, INT_MIN, 0, INT_MAX, INT_MIN, 0, INT_MIN, 0, -37, 43, 0, 47, -13, 0, -7, 0, INT_MAX, 0, -44, INT_MIN, 21, 34, 46, INT_MAX, -11, 0, 20, -44, INT_MIN, 0, INT_MAX, 17, 0, INT_MAX, INT_MAX, INT_MAX, 8, 0, 0, 0, INT_MAX, 48, 48, -24, 0, INT_MAX, 18, INT_MIN, -24, INT_MIN, INT_MIN, -26, INT_MAX, 0, INT_MAX, 0, -42, 0, INT_MAX, INT_MAX, -44, INT_MIN, INT_MIN, -24, 0, INT_MAX, 49, INT_MAX, 45, -23, -37, INT_MAX, 0, INT_MAX, INT_MAX, INT_MIN, INT_MAX, -17, INT_MIN, INT_MAX, 0, 0, 25, INT_MAX, -40, -15, -24, INT_MAX, -30, 35, 43, INT_MIN, INT_MIN, -37, 36, 0, 33, 29, 0, -10, -44, INT_MIN, 30, 0, INT_MIN, INT_MIN, INT_MAX, INT_MIN, -32, INT_MIN, INT_MIN, INT_MIN, 48, INT_MIN, -13, INT_MIN, INT_MIN, 0, -29, 0, INT_MAX, -23, INT_MIN, -39, -20, INT_MIN, 15, 0, 18, 43, INT_MIN, 0, INT_MIN, INT_MIN, INT_MIN, 33, 0, 0, INT_MIN, 36, -13, -37, INT_MIN, 17, 0, -23, 9, INT_MIN, -6, INT_MIN, -37, INT_MAX, INT_MIN, INT_MIN, INT_MIN, 0, INT_MAX, INT_MIN, INT_MIN, 37, INT_MIN, 19, 26, INT_MIN, 0, 1, 37, INT_MAX, INT_MAX, 0, 31, -38, -14, INT_MAX, INT_MAX, -40, 0, 0, 0, 0, INT_MAX, -25, 40, INT_MIN, 3, -9, INT_MIN, INT_MIN, -16, 8, 0, 0, INT_MAX, 0, INT_MIN, 47, -40, 0, INT_MIN, 0, -18, INT_MAX, 0, 0, 42, INT_MIN, INT_MIN, 38, INT_MIN, 0, 0, -41, 7, INT_MIN, INT_MIN, INT_MIN, INT_MIN, 0, INT_MAX, INT_MAX, INT_MIN, 0, 42, -32, INT_MAX, INT_MAX, INT_MIN, -10, INT_MAX, 0, 0, INT_MIN, INT_MAX, INT_MIN, INT_MIN, 0, INT_MIN, 0, 19, -15, INT_MIN, 0, -20, INT_MIN, INT_MAX, 4, 0, INT_MIN, 1, 12, -47, 44, 0, -5, 2, 2, 0, 34, INT_MIN, INT_MAX, -48, 49, 0, INT_MIN, 46, -33, INT_MAX, INT_MAX, INT_MIN, INT_MAX, INT_MIN, 50, 0, -30, -14, 25, 5, INT_MAX, 32, 13, 28, 9, INT_MIN, 30, INT_MIN, 0, -17, -35, INT_MAX, INT_MIN, INT_MIN, INT_MAX, 0, INT_MIN, 0, -8, 0, 44, INT_MAX, INT_MIN, 45, 0, 0, INT_MAX, INT_MAX, 14, INT_MAX, 29, 0, 0, 22, -47, -32, -32, INT_MIN, -23, 42, 0, 0, INT_MIN, INT_MAX, 0, 0, 0, -31, INT_MIN, 26, INT_MIN, -33, 0, INT_MAX, INT_MIN, 0, INT_MAX, INT_MIN, 23, INT_MIN, INT_MAX, -47, 1, 35, INT_MIN, INT_MAX, 3, 0, INT_MIN, INT_MIN, INT_MIN, -4, -21, INT_MAX, -8, 24, INT_MIN, INT_MAX, 0, 0, INT_MIN, -24, 38, INT_MIN, INT_MAX, 0, INT_MAX, INT_MAX, INT_MAX, INT_MAX, -35, 0, -30, 18, 0, INT_MIN, -2, 0, -35, 0, -47, INT_MIN, 0, 0, -7, 4, -27, -49, 0, INT_MIN, -13, INT_MIN, INT_MIN, INT_MAX, INT_MAX, -9, 28, -35, -13, INT_MIN, INT_MAX, INT_MIN, 0, INT_MAX, -8, INT_MIN, 0, INT_MAX, 0, 49, INT_MIN, -28, -32, 0, 0, 46, 0, -8, -6, INT_MIN, INT_MAX, INT_MAX, -27, INT_MIN, 8, 18, 0, 0, INT_MIN, -41, INT_MAX, -30, INT_MIN, 29, 0, 0, 0, INT_MAX, INT_MIN, INT_MAX, -6, 0, INT_MAX, -34, -24, INT_MAX, 3, 3, 33, -48, -13, INT_MIN, 44, 0, 0, 16, 17, INT_MIN, INT_MAX, 36, 0, INT_MAX, INT_MIN, 48, 0, INT_MIN, INT_MAX, 31, 37, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MAX, INT_MIN, 43, -20, INT_MAX, INT_MIN, INT_MIN, 0, 14, -9, INT_MAX, INT_MAX, 30, INT_MAX, INT_MIN, INT_MIN, 0, INT_MAX, INT_MAX, -28, INT_MAX, INT_MIN, INT_MIN, INT_MIN, INT_MIN, 32, -37, INT_MIN, INT_MIN, 35, 0, INT_MAX, 0, INT_MIN, INT_MIN, INT_MAX, 26, 7, INT_MAX, INT_MAX, 4, -30, -42, 0, 0, INT_MIN, INT_MAX, -40, 0, INT_MAX, 0, 4, 19, -26, -18, -28, INT_MIN, 0, INT_MIN, INT_MAX, INT_MIN, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MIN, INT_MIN, -34, 41, INT_MAX, -10, INT_MAX, INT_MIN, INT_MAX, INT_MIN, 38, 32, -45, -49, INT_MAX, -25, -3, -7, 41, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 0, 37, INT_MIN, -2, 31, 0, -3, -11, 0, 1, 0, INT_MAX, INT_MAX, -30, INT_MIN, 26, -17, 39, INT_MAX, -41, 5, INT_MAX, INT_MAX, 0, INT_MIN, 34, -4, 30, INT_MAX, 33, -26, 0, -28, -2, INT_MIN, 0, 32, -18, INT_MAX, -13, 50, 38, 0, INT_MIN, INT_MIN, 41, INT_MAX, INT_MAX, INT_MAX, 0, 0, 0, -12, 0, INT_MIN, -31, INT_MIN, INT_MIN, 34, INT_MIN, -21, INT_MIN, 0, -17, 27, INT_MAX, INT_MAX, INT_MIN, INT_MIN, INT_MIN, 19, 0, INT_MIN, INT_MAX, INT_MAX, 8, 21, INT_MIN, -16, 44, -19, 0, 49, INT_MIN, -15, 40, 0, INT_MIN, 30, INT_MAX, INT_MAX, -41, -35, -36, INT_MAX, INT_MAX, 0, -36, INT_MIN, 0, 10, INT_MAX, INT_MAX, 0, 0, 0, INT_MIN, INT_MIN, -44, 0, -21, INT_MAX, 0, INT_MAX, -42, 29, 49, -36, INT_MAX, -48, -21, INT_MIN, -4, 33, INT_MAX, -45, INT_MIN, INT_MAX, INT_MIN, -30, INT_MIN, 49, 0, -3, 0, -38, 30, -8, 0, INT_MIN, INT_MAX, 0, 0, -3, 0, INT_MIN, 29, INT_MIN, -47, INT_MAX, INT_MAX, 0, 0, 37, INT_MAX, 0, 0, 24, 0, 0, INT_MIN, 15, INT_MAX, 0, INT_MAX, INT_MAX, 0, -39, -24, INT_MAX, INT_MAX, INT_MAX, 0, 50, INT_MAX, 1, INT_MAX, 0, 15, 26, INT_MAX, -5, -2, INT_MAX, INT_MAX, INT_MIN, -24, 0, -44, INT_MIN, INT_MAX, 17, -15, 4, INT_MIN, 10, 0, 17, INT_MIN, 0, 11, INT_MIN, 15, -44, 32, 31, 0, 0, -29, 22, INT_MIN, 0, INT_MAX, 12, 50, INT_MAX, 0, 0, INT_MAX, 45, 0, INT_MAX, -9, INT_MAX, INT_MAX, 0, 0, 2, -39, 39, INT_MIN, 0, -39, INT_MIN, INT_MAX, 21, 16, INT_MIN, INT_MIN, INT_MAX, 0, INT_MIN, -34, INT_MAX, 16, 0, -3, INT_MIN, 1, 24, 0, INT_MAX, 19, -10, INT_MIN, INT_MIN, 0, 0, 10, 43, INT_MAX, 22, INT_MIN, 0, 22, 0, 0, 37, INT_MIN, -1, INT_MAX, -41, 43, INT_MIN, 0, 35, 0, 27, -13, 44, 0, -43, INT_MAX, 34, 22, INT_MAX, -40, 9, 0, -47, -29, INT_MAX, 3, 16, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 5, 10, 0, 0, 33, 0, -18, 0, 4, INT_MIN, 0, INT_MIN, 0, INT_MIN, 39, INT_MIN, 11, 0, 0, -39, INT_MIN, 19, INT_MAX, INT_MAX, -25, -2, INT_MAX, 38, 35, INT_MIN, INT_MIN, -11, INT_MIN, INT_MIN, INT_MIN, 40, 0, 24, -39, 0, INT_MAX, -26, INT_MAX, 0, 0, INT_MAX, INT_MIN, -22, 49, INT_MAX, INT_MIN, 3, 0, 15, INT_MIN, 0, INT_MIN, INT_MIN, INT_MAX, -46, INT_MIN, 36, 36, INT_MAX, 0, INT_MAX, -2, 0, 50, INT_MAX, 0, 41, 26, -19, 0, 1, 47, -41, INT_MIN, -13, 0, 44, INT_MAX, -43, INT_MIN, 0, INT_MIN, 10, -27, INT_MAX, INT_MIN, -3, INT_MIN, 0, 39, 0, 23, 4, -16, -2, 38, 21, 46, -20, -29, INT_MAX, 0, INT_MIN, -28, INT_MAX, INT_MAX, INT_MIN, -6, 35, 38, 0, INT_MAX, INT_MIN, 0, INT_MAX, 42, 0, -46, INT_MAX, INT_MAX, 22, INT_MIN, INT_MIN, -18, -32, INT_MIN, INT_MIN, INT_MAX, 0, 44, INT_MIN, INT_MIN, 0, INT_MIN, 0, 25, INT_MIN, -32, 0, 36, INT_MAX, INT_MIN, -2, 21, 0, 32, 0, INT_MIN, INT_MAX, 0, 0, INT_MIN, -17, 0, INT_MIN, 0, INT_MAX, INT_MIN, INT_MIN, -32, 47, INT_MIN, 0, 4, 44, 28, INT_MAX, 0, INT_MIN, 0, -20, -36, 44, -41, 48, INT_MAX, -46, INT_MAX, 0, INT_MIN, 0, INT_MIN, 50, -33, INT_MIN, INT_MIN, -38, -18, INT_MIN, INT_MAX, 46, 11, 39, INT_MIN, 0, INT_MAX, INT_MAX, -50, -47, INT_MAX, INT_MAX, 39, 0, INT_MIN, -50, INT_MAX, 0, INT_MAX, 0, INT_MAX, INT_MAX, INT_MIN, 0, 45, 0, 45, 0, -35, INT_MIN, -22, 0, -46, INT_MAX, INT_MIN, 24, INT_MIN, 33, 19, INT_MAX, 20, 0, -4, INT_MAX, 31, INT_MAX, 0, INT_MIN, INT_MIN, 42, -47, -34, INT_MAX, INT_MAX, 0, INT_MAX, INT_MAX, INT_MIN, -40, INT_MIN, INT_MAX, INT_MIN, -44, INT_MAX, 31, 27, INT_MIN, INT_MIN, 12, 0, INT_MAX, 0, -46, -27, INT_MAX, 0, INT_MIN, 9, INT_MAX, 0, 48, -41, INT_MIN, 0, 0, 0, INT_MIN, INT_MIN, 0, INT_MAX, INT_MAX, -30, 3, INT_MAX, -21, 0, 10, -27, INT_MAX, INT_MAX, 0, INT_MAX, 30, 0, 20, INT_MAX, -17, 49, INT_MIN, 28, 7, INT_MIN, -29, INT_MIN, INT_MIN, 32, 40, 0, 37, -42, 17, INT_MIN, 15, 13, 20, 1, 23, 0, 0, INT_MIN, 0, INT_MAX, 45, INT_MIN, INT_MAX, 0, 33, 32, -1, 49, INT_MAX, INT_MIN, 1, INT_MIN, 0, 38, INT_MAX, 0, 24, 22, -41, 0, INT_MAX, INT_MAX, 0, 28, -13, -19, 0, -9, INT_MIN, 34, 0, INT_MAX, INT_MIN, -22, -23, INT_MAX, INT_MAX, 20, -4, INT_MIN, INT_MIN, 34, INT_MAX, INT_MIN, 46, 0, INT_MAX, -38, INT_MIN, -8, INT_MAX, 0, 33, 0, -15, 24, 30, 0, -29, 39, INT_MIN, 0, INT_MIN, 39, -29, 0, 0, 39, 32, INT_MIN, INT_MIN, -3, 40, 0, 0, 0, INT_MIN, -28, 0, 40, -31, INT_MIN, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 42, INT_MAX, -50, -16, INT_MIN, INT_MAX, -30, 0, 0, INT_MIN, INT_MAX, 0, INT_MAX, 0, -33, 20, 0, 0, 0, 36, -33, -5, -2, INT_MAX, INT_MAX, INT_MIN, 0, INT_MAX, INT_MAX, INT_MIN, 0, INT_MAX, 46, -11, 0, -14, 9, 0, 0, INT_MAX, -39, 24, INT_MAX, -24, INT_MAX, INT_MAX, INT_MAX, INT_MIN, 0, INT_MAX, INT_MIN, -49, 0, 24, INT_MAX, 0, 0, INT_MAX, 7, INT_MAX, INT_MIN, INT_MIN, -27, -41, INT_MIN, INT_MAX, 0, 0, INT_MAX, INT_MAX, INT_MIN, 50, 0, 27, -14, 0, 28, 21, INT_MIN, 0, -46, INT_MAX, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MAX, INT_MAX, -24, -49, INT_MAX, 48, INT_MIN, INT_MAX, -15, 0, 0, 0, -8, -44, -6, INT_MAX, 0, 0, -45, -46, 0, INT_MAX, INT_MIN, 0, -17, 26, -24, INT_MIN, 6, 0, 0, -10, INT_MAX, INT_MAX, -35, 45, 0, -26, INT_MIN, INT_MIN, 39, INT_MIN, 0, INT_MIN, 0, 9, INT_MIN, 31, 10, INT_MIN, 8, 37, -11, 29, -49, -17, 14, -46, 0, 47, INT_MAX, INT_MIN, 20, INT_MAX, INT_MAX, -14, INT_MIN, 16, 0, INT_MAX, INT_MIN, 0, 0, 0, INT_MAX, 16, INT_MIN, INT_MIN, -48, INT_MAX, INT_MIN, 0, 0, INT_MIN, INT_MIN, INT_MIN, 42, -36, 0, 0, 32, -10, 0, INT_MIN, -48, INT_MIN, -17, -17, 4, INT_MAX, 0, 11, 0, -42, INT_MAX, INT_MIN, 45, 0, 43, INT_MAX, -50, 27, INT_MIN, 0, INT_MAX, 47, 0, INT_MIN, INT_MAX, INT_MIN, -31, -11, -48, INT_MIN, 0, 0, -35, INT_MAX, 21, 0, INT_MIN, 22, -45, INT_MAX, INT_MIN, 0, -48, 0, 0, 41, -3, INT_MIN, INT_MIN, 1, -12, 8, INT_MAX, 2, 0, 10, 0, -36, INT_MIN, -38, 0, INT_MIN, 22, -49, -27, 0, -23, INT_MIN, -1, INT_MAX, 36, INT_MIN, -31, INT_MAX, -23, INT_MIN, 0, 1, INT_MAX, -31, INT_MIN, -36, 0, 13, INT_MIN, INT_MAX, -31, INT_MIN, INT_MAX, INT_MIN, 0, -10, INT_MAX, 0, 0, 14, 0, 41, INT_MIN, INT_MAX, INT_MIN, 0, 6, -30, INT_MIN, INT_MIN, 0, -30, 48, 0, 25, 0, 0, 3, 0, -38, INT_MAX, INT_MAX, 45, 0, -43, INT_MAX, -33, INT_MAX, 41, 41, INT_MIN, INT_MIN, 49, INT_MIN, INT_MIN, 0, 0, -37, INT_MIN, 0, 14, 0, 0, 0, INT_MIN, 0, 0, 39, 0, 31, INT_MAX, INT_MIN, INT_MAX, -31, 48, -9, -25, INT_MAX, -25, 0, INT_MIN, 45, -38, -40, INT_MAX, 21, -36, 0, 18, INT_MAX, INT_MAX, 24, 44, 21, 4, INT_MAX, 28, INT_MAX, 0, -37, INT_MAX, 30, INT_MAX, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 0, -28, 0, 43, 0, INT_MAX, 0, -42, -22, INT_MAX, 0, INT_MAX, INT_MAX, -14, -50, -3, 0, 2, 23, INT_MIN, INT_MAX, 42, INT_MAX, 8, 0, 0, INT_MAX, INT_MAX, 40, INT_MAX, -12, -4, 19, -7, INT_MIN, INT_MIN, 0, INT_MIN, 0, 12, INT_MAX, INT_MIN, 36, INT_MIN, -31, 0, 49, INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, INT_MIN, INT_MAX, 7, -20, 2, INT_MAX, 10, 0, 0, INT_MAX, 50, INT_MAX, 0, INT_MAX, INT_MIN, 10, INT_MIN, 0, 17, 0, -20, INT_MAX, INT_MIN, -22, INT_MIN, INT_MAX, 14, -43, INT_MAX, 0, -31, INT_MAX, INT_MAX, 0, -47, -50, 0, -3, INT_MAX, INT_MIN, 0, INT_MIN, INT_MIN, -31, 25, -15, 21, -11, 34, 0, 26, INT_MAX, -1, -30, 0, INT_MIN, INT_MIN, 6, 0, INT_MIN, 0, 3, 0, INT_MAX, 0, INT_MIN, -22, INT_MIN, INT_MAX, INT_MAX, INT_MAX, -15, INT_MIN, INT_MIN, 0, 21, INT_MIN, 0, INT_MAX, 19, INT_MAX, INT_MIN, 0, 27, -9, 0, -34, INT_MAX, 0, 31, 0, 0, INT_MAX, INT_MIN, 26, INT_MAX, 17, 0, 0, INT_MIN, INT_MIN, -35, 16, INT_MIN, INT_MAX, 11, INT_MAX, -17, INT_MIN, INT_MAX, -15, 0, INT_MIN, 23, INT_MIN, INT_MIN, -15, -17, INT_MIN, INT_MAX, INT_MIN, 46, INT_MIN, INT_MAX, 0, 0, 0, INT_MIN, 49, 7, 18, INT_MIN, INT_MAX, INT_MAX, 0, 0, INT_MAX, 0, -10, INT_MAX, INT_MIN, 48, -15, INT_MIN, 0, -43, INT_MAX, INT_MIN, INT_MAX, -32, INT_MIN, 31, -42, INT_MAX, 0, -18, 38, 0, INT_MIN, 49, INT_MIN, INT_MAX, 49, INT_MIN, INT_MAX, 0, INT_MAX, INT_MAX, 0, -8, 0, 0, INT_MIN, -34, 0, -49, INT_MIN, 40, INT_MIN, INT_MAX, -43, INT_MIN, INT_MAX, INT_MIN, -46, INT_MIN, 18, -11, INT_MAX, INT_MIN, INT_MIN, 35, INT_MIN, INT_MIN, 30, INT_MIN, INT_MAX, -44, 19, -36, 45, 0, -9, INT_MIN, 44, 42, INT_MAX, -31, 0, 0, INT_MIN, INT_MIN, 0, -16, INT_MIN, INT_MIN, 4, -40, 0, 32, 0, 34, INT_MAX, 0, -34, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MIN, INT_MAX, 42, INT_MIN, 0, -15, INT_MIN, 0, 0, INT_MIN, INT_MAX, INT_MAX, 0, INT_MIN, -2, INT_MAX, INT_MAX, INT_MIN, -35, 0, -14, -5, 4, 0, 0, INT_MAX, 0, 0, 0, 0, -35, INT_MIN, 0, -2, 34, INT_MIN, 0, 34, 1, INT_MAX, 49, 0, -32, 25, INT_MAX, 17, 0, INT_MIN, 20, 0, 0, 17, 0, INT_MIN, 45, 0, 0, INT_MIN, INT_MIN, INT_MIN, 0, INT_MAX, INT_MIN, 2, -29, INT_MAX, 47, 0, 0, INT_MIN, -45, 24, INT_MIN, -17, INT_MIN, 0, -14, 0, INT_MAX, 0, -12, 0, 0, INT_MIN, INT_MAX, INT_MAX, 47, -27, -25, INT_MIN, INT_MAX, INT_MIN, 0, 36, 8, 36, -2, -19, -50, INT_MAX, -26, -29, 19, INT_MIN, INT_MIN, 0, 0, 41, INT_MIN, -4, -3, -36, 0, -13, 44, INT_MAX, INT_MAX, 9, INT_MIN, 13, -34, INT_MIN, 0, INT_MAX, INT_MIN, 0, INT_MAX, INT_MAX, INT_MAX, -12, 18, -2, -31, 0, 0, INT_MAX, 0, 0, 0, -42, -25, 0, INT_MAX, -44, 22, 0, INT_MAX, -29, INT_MAX, INT_MAX, -22, 0, INT_MAX, INT_MIN, INT_MAX, 18, INT_MAX, -35, INT_MIN, -4, -1, INT_MIN, INT_MIN, INT_MIN, INT_MAX, INT_MAX, 16, 0, 0, -45, INT_MIN, 2, INT_MIN, 7, 42, 0, INT_MIN, 0, 3, INT_MAX, 34, INT_MAX, -45, 44, 0, -37, 0, INT_MAX, INT_MAX, 50, -18, 13, INT_MAX, 17, INT_MIN, 3, INT_MIN, INT_MAX, 15, -5, -36, INT_MAX, INT_MIN, 0, INT_MAX, INT_MIN, INT_MAX, 0, 0, INT_MAX, 0, -12, 22, -47, 6, INT_MAX, INT_MAX, INT_MAX, -43, INT_MAX, INT_MIN, INT_MIN, 0, -29, 0, INT_MAX, 14, INT_MAX, 23, INT_MAX, 0, -5, 0, INT_MAX, INT_MIN, 37, -35, 0, INT_MIN, 21, 3, INT_MAX, 0, 3, 27, INT_MIN, 24, INT_MAX, -31, INT_MAX, 50, 0, INT_MIN, 24, 45, INT_MIN, 26, INT_MAX, 39, 0, INT_MIN, 0, 0, 0, -48, -39, -32, INT_MAX, -30, 10, 18, -34, -32, 0, INT_MIN, -42, 15, -8, 0, INT_MAX, INT_MIN, INT_MIN, INT_MAX, -25, -9, INT_MIN, 34, INT_MIN, INT_MAX, INT_MIN, -30, INT_MAX, -26, INT_MIN, INT_MIN, 0, 0, INT_MIN, 0, INT_MIN, 0, 0, 12, 0, -48, 0, -30, INT_MIN, INT_MIN, -21, -41, 31, INT_MIN, INT_MAX, INT_MAX, 0, INT_MIN, 8, -8, 50, 0, -42, -16, 0, 21, INT_MAX, 0, -5, 16, 0, 0, 30, -45, INT_MAX, -38, 4, -23, INT_MIN, -33, INT_MIN, -26, -50, 13, 22, 48, INT_MAX, 0, INT_MAX, -36, INT_MAX, INT_MIN, 0, -15, INT_MIN, INT_MAX, 40, 0, 14, INT_MAX, 31, -9, 0, -26, -1, 0, -18, INT_MIN, -29, -2, 16, INT_MIN, -12, INT_MIN, -8, INT_MAX, 0, INT_MIN, 0, -16, INT_MAX, INT_MAX, -3, -16, 41, INT_MIN, -42, INT_MAX, 0, 0, 0, INT_MAX, 0, 0, 0, 0, 43, 0, INT_MIN, -20, -48, INT_MAX, 32, INT_MIN, 22, 0, 0, INT_MAX, -46, INT_MAX, INT_MAX, -24, 36, 0, -23, INT_MIN, 0, 0, -17, 0, INT_MAX, INT_MAX, INT_MIN, INT_MIN, -44, 6, -25, 0, INT_MAX, INT_MIN, -32, 5, 5, 32, -41, INT_MAX, INT_MAX, 44, -44, INT_MAX, 22, 8, 20, 31, 10, 0, -41, INT_MAX, INT_MAX, -39, -12, -43, 0, 0, 0, 0, INT_MAX, 0, INT_MIN, 0, INT_MIN, 14, 18, INT_MIN, INT_MIN, 1, INT_MAX, -11, -39, INT_MIN, 43, INT_MIN, INT_MAX, INT_MAX, 14, -10, INT_MIN, 0, -39, 1, INT_MAX, 0, 0, 5, 17, INT_MAX, INT_MIN, 0, -18, -17, 9, 0, INT_MAX, 0, INT_MIN, -4, 0, INT_MIN, 0, -12, INT_MAX, 0, 3, -36, INT_MAX, INT_MAX, 0, 16, INT_MIN, 0, -5, 21, INT_MAX, 46, 5, 0, 0, -2, 22, INT_MAX, 0, 0, INT_MIN, 44, 0, 0, 0, 0, INT_MAX, INT_MIN, INT_MAX, INT_MIN, 30, INT_MAX, -27, -36, INT_MIN, 0, 46, INT_MIN, INT_MAX, -50, INT_MAX, -33, 30, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 0, 0, 25, -21, -31, INT_MAX, -50, 0, 8, 40, INT_MAX, 0, 0, INT_MIN, -42, INT_MIN, 27, 48, 0, INT_MAX, 0, 36, INT_MIN, 13, 39, 46, INT_MIN, 0, INT_MAX, INT_MAX, INT_MIN, -38, 6, -10, INT_MIN, 0, 0, 0, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MIN, 0, 0, 35, INT_MIN, 43, 16, -35, 0, 0, INT_MIN, -41, 50, 33, 45, INT_MIN, INT_MAX, 0, 0, -7, -24, 0, 0, INT_MIN, 0, 47, INT_MIN, 12, 0, 0, -7, -7, INT_MIN, 0, 0, 0, -37, -18, INT_MIN, 21, INT_MIN, 0, 21, 42, 16, INT_MIN, -25, INT_MAX, 45, INT_MAX, 18, 24, INT_MIN, INT_MAX, -43, INT_MAX, INT_MIN, INT_MAX, INT_MIN, 23, -36, -5, -23, 41, INT_MIN, 21, 18, INT_MIN, INT_MAX, INT_MAX, -17, 0, INT_MAX, 0, 0, INT_MIN, INT_MIN, 0, INT_MAX, INT_MIN, INT_MAX, INT_MAX, 8, 0, -20, INT_MAX, -24, INT_MIN, INT_MAX, 12, 37, 0, -23, INT_MAX, 0, INT_MAX, 9, INT_MIN, INT_MAX, INT_MAX, INT_MIN, INT_MIN, 0, 10, -5, INT_MIN, 26, INT_MAX, INT_MAX, 0, INT_MAX, 0, 33, 0, 0, INT_MIN, -47, 20, INT_MAX, 0, 28, 16, INT_MAX, 47, INT_MAX, -1, INT_MIN, 0, 40, INT_MIN, 0, -27, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 0, INT_MAX, INT_MAX, INT_MIN, 14, 7, 1, INT_MAX, -4, 0, INT_MAX, 0, INT_MIN, -17, INT_MIN, 23, INT_MIN, -12, 0, INT_MIN, 0, INT_MIN, 4, INT_MAX, INT_MIN, -33, -11, 0, 23, INT_MIN, 0, -1, 46, -15, INT_MIN, 0, INT_MAX, INT_MIN, INT_MIN, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 5, 47, INT_MAX, INT_MIN, INT_MAX, 0, INT_MAX, INT_MAX, 0, 0, INT_MIN, 0, 0, 30, 0, 5, INT_MAX, 0, 0, 41, -30, 0, -28, INT_MIN, INT_MAX, INT_MIN, 0, INT_MIN, 0, INT_MAX, 32, 0, 50, 0, -1, 11, 17, -2, INT_MAX, 14, INT_MIN, 0, -21, -47, 0, -43, INT_MIN, 0, -43, INT_MIN, -10, -32, INT_MIN, INT_MAX, INT_MIN, INT_MAX, INT_MIN, INT_MIN, INT_MAX, 42, -18, INT_MIN, 0, INT_MAX, 0, 0, INT_MAX, -37, 7, -46, INT_MAX, 0, -38, 25, 30, INT_MAX, INT_MAX, 37, INT_MIN, INT_MAX, 1, -31, INT_MAX, 4, 43, 36, INT_MAX, 0, INT_MAX, INT_MAX, 3, INT_MAX, 0, INT_MAX, 0, 0, 0, INT_MIN, -42, -16, -29, INT_MIN, 0, 0, INT_MIN, INT_MIN, 29, 25, -3, 27, 0, 29, -19, 2, 49, -29, -9, -36, 0, INT_MAX, -15, 0, 0, -13, 45, INT_MIN, -40, 11, INT_MIN, INT_MAX, -8, -1, INT_MIN };


static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";  

static char genRandom() { return alphanum[rand() % (sizeof(alphanum) - 1)]; }

static string_code hashit (std::string const& inString) {
    if (inString == "int" || inString == "long") return eint;
    if (inString == "unsigned") return euint;
    if (inString == "long long") return ellong;
    if (inString == "float") return efloat;
    if (inString == "char") return echar;
    if (inString == "char*") return estring;
}

void* blt_args::get_arg(std::string const& arg_type) {
  switch (hashit(arg_type)) {
    case eint:
      return (void*) &ints[intCnt++];
    default:
      printf("Error: Argument generator required\n");
      exit(1);
  }
}

/*
void* blt_args::get_arg(std::string const& arg_type) {
  void* ret;
  switch (hashit(arg_type)) {
    case eint: {
      int ints[5];
        ints[0] = rand() % 50;
        ints[1] = -1*(rand() % 50);
        ints[2] = INT_MAX;
	// TL Note: For now so when -2147483648 is put in replay file
	// the compiler doesn't yell
        ints[3] = INT_MIN+1;
        ints[4] = 0;
      int* ret = new int[1];
      // TL for now
      ret[0] = ints[2];
      //      ret[0] = ints[rand() / (RAND_MAX/5)];

      return (void*)ret;
    }
    case euint: {
      unsigned uints[3];
        uints[0] = rand() % UINT_MAX;
        uints[1] = UINT_MAX;
        uints[2] = 0;
      unsigned* ret = new unsigned[1];
      ret[0] = uints[rand() / (RAND_MAX/3)];
      return (void*) ret;
    }
    case ellong: {
      long long llongs[5];
        llongs[0] = rand() % LLONG_MAX;
        llongs[1] = -1*(rand() % LLONG_MAX);
        llongs[2] = LLONG_MAX;
        llongs[3] = LLONG_MIN;
        llongs[4] = 0;
      long long* ret = new long long[1];
      ret[0] = llongs[rand() / (RAND_MAX/5)];
      return (void*) ret;
    }
    case efloat: {
      float floats[5];
        floats[0] = static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(FLT_MAX)));
        floats[1] = FLT_MIN + static_cast <float> (rand()) * FLT_MAX;
        floats[2] = FLT_MAX;
        floats[3] = FLT_MIN; 
        floats[4] = 0;
      float* ret = new float[1];
      ret[0] = floats[rand() / (RAND_MAX/5)];
      return (void*) ret;
    }
    case echar: {
      char chars[5];
        chars[0] = rand() % CHAR_MAX;
        chars[1] = -1*(rand() % CHAR_MAX);
        chars[2] = ' ';
        chars[3] = CHAR_MAX;
        chars[4] = CHAR_MIN;
      char* ret = new char[1];
      ret[0] = chars[rand() / (RAND_MAX/5)];
      return (void*) ret; 
    }
    case estring: {
      char* strings[3];
        strings[0] = NULL;
        strings[1] = (char*)"";
        unsigned r = rand() % CHAR_MAX;
        strings[2] = (char*) malloc(sizeof(char) * r);
        for(unsigned i = 0; i < r; ++i)
            strings[2][i] = genRandom();
        strings[2][r] = 0;
      char** ret = new char*[1];
      ret[0] = strings[rand() / (RAND_MAX/3)];
      return (void*) ret; 
    }
    default:
      printf("Error: Argument generator required\n");
      exit(1);
  }
}
*/
