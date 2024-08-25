#include <stdio.h>

int main()
{
  unsigned char a = 200;
  unsigned char b = 100;

  // while evaluating a + b, both a and b is promoted to int type
  unsigned char c = a + b;
  printf("%d %d\n", a + b, c);
  
  return 0;
}