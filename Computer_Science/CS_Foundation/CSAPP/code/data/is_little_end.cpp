//
// Created by zhangyunjie on 2019/12/4.
//
#include <iostream>
using namespace std;

int main()
{
  int x = 0x1234567;
  int list[6] = {1, 2, 3, 4, 5, 6};
  int *b = begin(list);
  int *e = end(list);
  for (int *b = list; b != end(list); ++b) {
    cout << "address: " << &b << endl;
  }
  return 0;
}
