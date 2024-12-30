#include<stdio.h>

int main() {
	int b = 50;
	int abc;

	/* abc = getchar();  getchar fxn reads input from the keyboard */

	printf("press y for continue or N to stop : ");
	abc = getchar(); 
	if (abc == 'y') /* if abc != EOF,print  the content of abc  */
		printf("y : you entered y to continue\n");	/* putchar(abc);  putchar writes data to the screen */
	else if (abc == 'n') 
		printf("N : you entered N to stop\n");

	printf("b = %c\n", b);
	putchar(b);
	putchar('\n');
	putchar('2');
	return 0;

}
