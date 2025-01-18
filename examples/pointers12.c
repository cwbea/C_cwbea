#include <stdio.h>

int main() {

     int x, y;
     int *const ptr2 = &x;		//a constant pointer
     const int *ptr1 = &x;		//pointer to a constant     
     int *const ptr3 = &x;	        //constant pointer to a constant

     while (ptr1 != 0) {
	     printf("address of x = %p\n", ptr1);
	     printf("address of x = %p\n", ptr2);
	     printf("address of x = %p\n", ptr3);
	     ptr1 = 0;
	    
     }

     

/*     const int y = 12;
     int const x = 20;			//const initialisationa and declaration must be on same line

     printf("x = %d\ny = %d\n", x, y); */

     return 0;
}


