#include <cstring>
#include "LilIntBag.hpp"

LilIntBag::LilIntBag() :
  sz(16), cur(0) /*, invalidMarker(0x80000000)*/ {
  a = new int[sz];
}

LilIntBag::~LilIntBag() {
  delete [] a;
}

void LilIntBag::resize() {
  sz *= 2;
  int* tmp = new int[sz];
  memcpy(tmp, a, sz / 2 * sizeof(int));
  delete [] a;
  a = tmp;
}

bool LilIntBag::member(int x) {
  /*if (x == invalidMarker)
    return false;*/
  for (int i = 0; i < cur; ++i)
    if (a[i] == x)
      return true;
  return false;
}

void LilIntBag::insert(int x) {
  if (cur == sz)
    resize();
  a[cur++] = x;
}

/*
void LilIntBag::remove(int x) {
  for (int i = 0; i < cur; ++i)
    if (a[i] == x) {
      a[i] = invalidMarker;
      return;
    }
}
*/

// This is a more realistic remove...
void LilIntBag::remove(int x) {
  for (int i = 0; i < cur; ++i)
    if (a[i] == x) {
      a[i] = a[--cur];
      return;
    }
}

unsigned LilIntBag::get_size() {
  return cur;
}

unsigned LilIntBag::to_array(int*& dest) {
  unsigned n = get_size();
  dest = new int[n];
  memcpy(dest, a, n * sizeof(int));
  return n;
}
