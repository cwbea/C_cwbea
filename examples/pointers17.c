#include <stdio.h>

int main() {
	int arr[5] = {2,4,6,8,10};
	int *ip = 0;
	ip = &arr[0];

	printf("arr[4] = %d\n", ip[4]);
	
	for (int i = 0; i < 5; i++) {
		printf("arr val = %d\n", ip[i]);
	}

	return 0;

}
