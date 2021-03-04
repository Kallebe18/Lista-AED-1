#include <stdio.h>

int main() {
	int vezes, atual, final;

	scanf("%d", &atual);

	vezes = (int) (atual-10)/76;

	final = 10 + (vezes * 76) + 76;

	printf("%d\n", final);
	
	return 0;
}
