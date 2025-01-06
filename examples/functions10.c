#include <stdio.h>
                                            
int num[8] = {12, 56, 89, 75, 32, 1, 22, 100};
int square(int x), biggest(int num[8]);
                                            
int main() {
	int arr[2];
                                            
	arr[0] = biggest(num);
	arr[1] = square(arr[0]);
                                            
	printf("%d %d\n", arr[0], arr[1]);
}	
                                            
int biggest(int num[8]) {
	int i, index = 0;

	for (i = 0; i < 8; i++) 
		if (num[i] > num[index]) index = i;
	return num[index];
}

int square(int x) {
	return x * x;
}
