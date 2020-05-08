//
// Created by zhangyunjie on 2019/12/18.
//
int addcnt = 0;

void addvec(int *x, int *y, int *z, int n)
{
  int i;
  addcnt++;
  for (i=0; i < n; i++) {
    z[i] = x[i] + y[i];
  }
}
