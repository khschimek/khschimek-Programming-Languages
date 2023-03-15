#include <iostream>
#include "sort_func.h"
#include "utility.h"
#include "merger.h"

using namespace std;

#if 0
template <typename T, typename Ordered = std::less < T > >
std::vector<T>  sort_func(typename std::vector<T>::const_iterator begin, 
                          typename std::vector<T>::const_iterator end) {
  typename std::vector<T>::difference_type size =  end - begin;
  if (size <= 1) {
    return std::vector<T>(begin,end);
  }

  auto a0 = begin;
  auto a1 = a0 + size/2;
  auto b0 = a1;
  auto b1 = end;

  auto a = sort_func<T,Ordered>(a0,a1);
  auto b = sort_func<T,Ordered>(b0,b1);

  merger<typename std::vector<T>::const_iterator,typename std::vector<T>::const_iterator,Ordered> m(a.begin(),a.end(),b.begin(),b.end());
  return std::vector < T > (m.begin(),m.end());
}
#endif

std::vector<std::string> merge(const std::vector<std::string> &a, const std::vector<std::string> &b) {
  if (a.size() == 0) return b;
  if (b.size() == 0) return a;

  if (b[0] < a[0]) {
    return vec(b[0],merge(a,slice(b,1,b.size())));
  } else {
    return vec(a[0],merge(slice(a,1,a.size()),b));
  }
}

//-------------------------------------------------------------------------

vector<string> sort_vector(vector<string> items) {
  vector<string> sortedItems=items;
  sort(sortedItems.begin(), sortedItems.end());
  return sortedItems;
}

vector<string> sort_functional(vector<string> items) {
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
  return sort_vector(final);
}

std::vector<std::string>  sort_func(const std::vector<std::string> &items) {

  // replace this with your version; you can add addtional functions above as well.
  vector<string> input = items;
  return sort_functional(input);
}
