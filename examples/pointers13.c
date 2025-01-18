#include <stdio.h>

int main() {
	int *ptr1 = 0;
	int y  = 10;
	ptr1 = &y;
	
	printf("value of y = %d\n", *ptr1);
        
        int *ptr2 = 0;	
        ptr2 = &y;

	printf("value of y = %d\n", *ptr2);
                                  
        int *ptr3 = 0;
        ptr3  = &y;

	printf("value of y = %d\n", *ptr3);
			
	return 0;

}
