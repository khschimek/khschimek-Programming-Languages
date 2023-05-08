#include <algorithm>
#include "sort_proc.h"

using namespace std;

vector<string> sort_vector(vector<string> items) {
  vector<string> sortedItems=items;
  sort(sortedItems.begin(), sortedItems.end());
  return sortedItems;
}

void sort_procedural(vector<string> &items) {
  int size=(int)items.size();
  vector<string> first, second, firstFinal, secondFinal, final;
  for(int i=0; i<size; i++) {
    if(i<=size/2) {
      first.push_back(items[i]);
    }
    else {
      second.push_back(items[i]);
    }
  }
  firstFinal = sort_vector(first);
  secondFinal = sort_vector(second);
  for(auto x: firstFinal) {
    final.push_back(x);
  }
  for(auto y: secondFinal) {
    final.push_back(y);
  }
  sort(final.begin(), final.end());
  items=final;
}

void new_sort(vector<string> &items) {
  sort(items.begin(), items.end());
}

void sort_proc(vector<string> &items) {
  sort_procedural(items);
}
