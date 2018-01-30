#include<stdio.h>

int main()
{
  int base = 64, resto = 129,  i = 0, a, c;

  for (i = 0; i < 3; i++){
    a = resto / base;
    resto %= base;
    printf ("%d", a);
    base /= 8;
  }
return 0;
}
