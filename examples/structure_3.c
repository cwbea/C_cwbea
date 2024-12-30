#include <stdio.h>
struct taxcode {
	int number;
	char letter;
	
} employee_taxcode[2];

int main() {
	
	int i;
	struct taxcode tcode0;
	struct taxcode tcode1;
	struct taxcode tcode3[2];
	


	employee_taxcode[0].number = 12;
	employee_taxcode[1].letter = 'a';

	printf("employee_taxcode.number = %d\n", employee_taxcode[0].number);
	printf("employee_taxcode.letter = %c\n", employee_taxcode[1].letter);
	
	tcode0.number = 15;
	tcode1.letter = 'b';

	printf("tcode0.number = %d\n", tcode0.number);
	printf("tcode1.letter = %c\n", tcode1.letter);

	
	tcode3[0].number = 18;
	tcode3[1].letter = 'c';

	printf("tcode3.number = %d\n", tcode3[0].number);
	printf("tcode3.letter = %c\n", tcode3[1].letter);

	
		

	return 0;



}
