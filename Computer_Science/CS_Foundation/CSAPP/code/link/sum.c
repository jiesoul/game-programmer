//
// Created by zhangyunjie on 2019/12/11.
//
int sum(int *a, int n)
{
  int i, s = 0;
  for (i = 0; i < n; i++) {
    s += a[i];
  }
  return s;
}
