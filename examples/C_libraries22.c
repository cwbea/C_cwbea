#include <stdio.h>
#include <ctype.h>
#include <locale.h>

             

int main() {
	locale_t loc;
	loc = newlocale(LC_ALL, "en_US.UTF-8", NULL);

	char *c = "\xf0\x9f\x91\xa8";
	int x = 65;

	if (isalpha_l(x, loc)) {
		printf("%s is an alphabet letter in the en_US.UTF-8 locale\n", c);
	} else {
		printf("%s is not an alphabet letter in the en_US.UTF-8 locale\n", c);
	}

	return 0;	
}
