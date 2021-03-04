#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  int d[n], i;

  for(i=0; i<n; i++) {
    scanf("%d", &d[i]);
  }

  int tmp[32], count;
  for(i=0; i<n; i++) {
    count = 0;
    while (d[i] != 0) {
      tmp[count] = d[i]%4;
      printf("%d\n", d[i]%4);
      d[i] = d[i]/4;
      count++;
    }

    while(count > 0) {
      // printf("%d", tmp[count]);
      count--;
    }
    printf("\n");
  }

  return 0;
}