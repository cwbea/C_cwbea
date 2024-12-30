#include <stdio.h>

struct taxcode {
	int number;
	char letter;
} taxcode_x, taxcode_y;

int main() {
	struct taxcode tcode;
	tcode.number = 50;
	tcode.letter = 'a';

	printf("tcode.number = %d\n", tcode.number);
	printf("tcode.letter = %c\n", tcode.letter);

	taxcode_x.number = 55;
	taxcode_y.letter = 'b';
	
	printf("taxcode_x.number = %d\n", taxcode_x.number);
	printf("taxcode_y.letter = %c\n", taxcode_y.letter);

	return 0;


}
