#include <stdio.h>

struct taxcode {
	int number;
	char letter;
};

int main() {
	struct taxcode tcode;

	tcode.number = 50;
	tcode.letter = 'a';

	printf("tcode.number = %d\n", tcode.number);
	printf("tcode.letter = %c\n", tcode.letter);

	return 0;

	



}
