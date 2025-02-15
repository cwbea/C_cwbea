#include <stdio.h>
#include <ctype.h>

int main() {
	unsigned char ch = 'A';
	int c = 97;

	if (isupper(c)) {
		printf("%c is a capital letter\n", c);
	} else {
		printf("%c is not a capital letter\n", c);
	}

	return 0;
}
