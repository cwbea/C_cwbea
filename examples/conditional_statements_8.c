#include <stdio.h>

int main() {
	char ch;
	int digit_counts, other_counts;

	digit_counts = 5;
	other_counts = 10;
	ch = '9';

	if (ch >= '0' && ch <= '9') {
		digit_counts++;
		printf("the character is a digit\n");
		printf("digit_counts = %d\n", digit_counts);
	}
	else {
		other_counts++;
		printf("not a digit character\n");
	}

	return 0;


}
