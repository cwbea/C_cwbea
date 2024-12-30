#include <stdio.h>

int main() {
	char letter[10];
	int i,j;
	i = 0;
	j = 0;

	for (i=0; i<=10; i++) {
		scanf("%c", &letter[i]);
	}

	for (j=0; j<=10; j++) {
		printf("%c", letter[j]);
	}

	return 0;

}
