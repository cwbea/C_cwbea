#include <stdio.h>
#include <stdlib.h>

int main() {
	char letter;
	int letter_a;
	int letter_b;
	letter_a = 0;
	letter_b = 0;

	scanf("%c", &letter);

	switch (letter) {
		case 'a' : printf("%c", letter);
			   letter_a++; break;

		case 'b' : printf("%c", letter);
			   letter_b++; break;

		default  : printf("letter does not exist\n");
			   exit(1);
			
	}

	return 0;	


}
