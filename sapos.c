#include <stdio.h>

int main() {
  int p, s;
  scanf("%d %d", &p, &s);

  int pos[s], dis[s], i;
  for(i=0; i<s; i++) {
    scanf("%d %d", &pos[i], &dis[i]);
  }

  int j, r[p], pos_atual;
  // itera pedras e verifica se ha sapo
  for(i=1; i<p+1; i++) {
    // itera todos os sapos para cada pedra
    r[i-1] = 0;
    for (j=0; j<s; j++) {
      // verifica se havera algum sapo j na pedra i
      pos_atual = pos[j];
      while(pos_atual < p+1) {
        if(i == pos_atual) {
          r[i-1] = 1;
          break;
        };
        pos_atual += dis[j];
      }
      pos_atual = pos[j];
      while(pos_atual > 0) {
        if(i == pos_atual) {
          r[i-1] = 1;
          break;
        };
        pos_atual -= dis[j];
      }
    }
  }

  for(i=0; i<p; i++) {
    printf("%d\n", r[i]);
  }

  return 0;
}