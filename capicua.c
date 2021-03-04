#include <stdio.h>

int main() {
  int quantity, i;

  scanf("%d", &quantity);

  int numbers[quantity];

  for(i=0; i<quantity; i++) {
    scanf("%d", &numbers[i]);
  }

  for(i=0; i<quantity; i++) {
    int reverse = 
      numbers[i]%10*1000 + 
      numbers[i]%100/10*100 + 
      numbers[i]%1000/100*10 + 
      numbers[i]/1000;

    numbers[i] == reverse
      ? printf("yes")
      : printf("no");

    if (i < quantity-1) {
      printf(" ");
    } else {
      printf("\n");
    }
  }

  return 0;
}