#include <stdio.h>
#include "/home/cwbea/ctutor/examples/pre-processor/include/cwbea.h"
#include <stdlib.h>

int main(void) {
	int x, y, z, choice;

	menu();

	printf("\n\nEnter your choice : ");
	scanf("%d", &choice);

	switch (choice) {
		case 0 : printf("\n\t\taddition mode set\n\n");
			 printf("\t\tEnter first number : ");
			 scanf("%d", &x);
			 printf("\n\t\tEnter second number : ");
			 scanf("%d", &y);
			 z = add(x, y);
			 printf("\n\t\tsum = %d\n", z);
			 break;

		case 1 : printf("\n\t\tsubtraction mode set\n\n");
                         printf("\t\tEnter first number : ");
		         scanf("%d", &x);
                         printf("\n\t\tEnter second number : ");
                         scanf("%d", &y);
                         z = subtract(x, y);
                         printf("\n\t\tproduct = %d\n", z);
	         	 break;

		default :
			 printf("\n\nprogramme end\n");
			 exit(EXIT_SUCCESS);
	}

	return 0;
}
