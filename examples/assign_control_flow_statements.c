/* read input from keyboard in every occurrences of tab*/

#include <stdio.h>

int main() {
	int ch, tab, sp;
	
	
	while ((ch = getchar()) != EOF) {
		if (ch == '\t')
			tab++;
		if (ch == ' ')
			sp++;

	}

	printf("\ntab is : %d\n", tab);
	printf("space is : %d\n", sp);

	return 0;
	
		
}
