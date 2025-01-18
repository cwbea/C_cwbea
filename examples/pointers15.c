#include <stdio.h>

int main() {
	int arr[10] = {2,4,6,8,10,12,14,16,18,20};
        int n;
	int *p1 = 0;
	int *p2 = 0;
                                    
	p1 = &arr[3];
	p2 = &arr[5];
	n  = *p2 - *p1;	

	printf("n = %d\n", n);

	return 0;

}
