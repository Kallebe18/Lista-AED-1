#include <stdio.h>

int main() {
  int n, i;

  scanf("%d", &n);

  int base10List[n];
  for(i=0; i<n; i++) {
    scanf("%d", &base10List[i]);
  }

  int base4[32], count;
  for(i=0; i<n; i++) {
    count = 0;
    while (base10List[i] > 0) {
      base4[count] = base10List[i]%4;
      base10List[i] = base10List[i]/4;
      count++;
    }

    count --;
    while (count > -1) {
      switch (base4[count]) {
      case 0:
        printf("A");
        break;    
      case 1:
        printf("C");
        break;
      case 2:
        printf("G");
        break;
      case 3:
        printf("T");
        break;
      default:
        break;
      }
      count--;
    }
    printf("\n");
  }


  return 0;
}
