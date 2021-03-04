#include <stdio.h>

int main() {
  int a, b, c;
  char s;

  scanf("%d", &a);
  scanf("%d %c %d", &b, &s, &c);

  switch (s) {
    case 'x':
      b * c > a
        ? printf("overflow\n")
        : printf("no overflow");
      break;
    case '+':
      b + c > a
        ? printf("overflow\n")
        : printf("no overflow");
      break;

    default:
      printf("simbolo invalido\n");
      break;
  }

  return 0;
}