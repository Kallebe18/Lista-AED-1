#include <stdio.h>

int main() {
  int q;
  scanf("%d", &q);

  int i, n[q];
  for(i=0; i<q; i++) {
    scanf("%d", &n[i]);
  }

  int j, c;
  for(i=0; i<q; i++) {
    c = 0;
    for(j=1; j<n[i]+1; j++) {
      if(n[i]%j == 0) {
        c++;
      }
    }
    c == 2
      ? printf("primo\n")
      : printf("composto\n");
  }

  return 0;
}