#include <stdio.h>

int sum(int n)
{
  if (n == 1) return 1;
  return n + sub(n-1);
}

int main()
{
  printf("Hello world!\n");
  printf("%d\n", sub(5));
  return 0;
}
