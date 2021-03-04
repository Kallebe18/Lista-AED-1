#include <stdio.h>

int main() {
  int n, s, i, j;
  scanf("%d %d", &n, &s);

  int k[n], countSize=0, tmp=-1;
  for(i=0; i<n; i++) {
    scanf("%d", &k[i]);
  }

  int count[s];
  for(i=0; i<s; i++) {
    count[i] = 0;
    for(j=0; j<n; j++) {
      if(i+1 == k[j]) {
        count[i] += 1;
      }
    }
  }

  int min=99999999;
  for(i=0; i<s; i++) {
    if (count[i] < min) {
      min = count[i];
    }
  }

  printf("%d\n", min);

  return 0;
}