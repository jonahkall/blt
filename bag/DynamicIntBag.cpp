#include "DynamicIntBag.hpp"
#include "LilIntBag.hpp"
#include "BigIntBag.hpp"
#include <cstdio> 

DynamicIntBag::DynamicIntBag() :
  threshold(4), switched(false) {
  bag = new LilIntBag();
}

DynamicIntBag::DynamicIntBag(int threshold) :
  threshold(threshold), switched(false) {
  bag = new LilIntBag();
}

DynamicIntBag::~DynamicIntBag() {
  delete bag;
}

bool DynamicIntBag::pre_insert() {
  return get_size() < 10;
}

bool DynamicIntBag::pre_member() {
  return get_size();
}

bool DynamicIntBag::post_insert() {
  return get_size() <= 10;
}

bool DynamicIntBag::post_member() {
  return get_size();
}

bool DynamicIntBag::member(int x) {
  return bag->member(x);
}

void DynamicIntBag::insert(int x) {
  if (get_size() >= threshold && !switched) {
    switched = true;
    switch_bag();
  }
  bag->insert(x);
}

void DynamicIntBag::remove(int x) {
  bag->remove(x);
}

unsigned DynamicIntBag::get_size() {
  return bag->get_size();
}

unsigned DynamicIntBag::to_array(int*& dest) {
  return bag->to_array(dest);
}

void DynamicIntBag::switch_bag() {
  int* tmp;
  unsigned n = bag->to_array(tmp);
  delete bag;
  bag = new BigIntBag();
  for (int i = 0; i < n; ++i)
    bag->insert(tmp[i]);
  delete [] tmp;
}
