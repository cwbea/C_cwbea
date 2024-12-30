#include <stdio.h>

int main() {
	int i = 0;
	int arr[5];
	int j = 0;
	arr[0] = 9;
	arr[1] = 11;
	arr[2] = 12;
	arr[3] = 13;
	arr[4] = 10;
	int n;
	int m;
	int k;
	k = 0;
	m = 0;
	n = 0;
	int num[10];	

	while (i != 10) { 
		printf("i = %d\n", i);
		i++;
	}
	
	while (arr[j] != 10) {
		printf("arr[%d] = %d\n", j, arr[j]);
		j++;
	}

	do {
		scanf("%d", &num[n]);
		n++;
		
	} while (n <= 10);
	while (k <= 10) {
		printf("num[%d] = %d\n", k, num[k]);
		k++;
	}

	return 0;


}
