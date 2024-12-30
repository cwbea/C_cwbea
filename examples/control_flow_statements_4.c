#include <stdio.h>

int main() {
	int letter[10];
	int i;
	i = 0;
	int j;
	j = 0;
	

	for(j=0; j<=10; j++) {
		scanf("%d", &letter[j]);
	}

	for (i=0; i<=10; i++) {
		printf("%d", letter[i]);
	}

	return 0;


}
