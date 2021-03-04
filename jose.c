#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  a = (a%10*100) + (a%100/10*10) + a/100;
  b = (b%10*100) + (b%100/10*10) + b/100;

  a > b 
    ? printf("%d\n", a)
    : printf("%d\n", b);

  return 0;
}