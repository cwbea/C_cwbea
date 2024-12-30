#include <stdio.h>
#include <string.h>

union U {
	int numbers[10];
	char letters[10];
} u;

int main() {
	union U typec;
	union U typex;

	typex.numbers[0] = 10;
	typex.numbers[1] = 11;
	typex.numbers[2] = 12;

	//strcpy(typec.letters,"cwbea is writing")
	
	typec.letters[0] = 'h';
	typec.letters[1] = 'e';


	printf("numbers = %d\n", typex.numbers[0]);
	printf("numbers[1] = %d\n", typex.numbers[1]);
	printf("numbers[2] = %d\n", typex.numbers[2]);
	
	//printf("letters = %s\n", typec.letters);
	printf("letters = %c\n", typec.letters[0]);
	printf("letters = %c\n", typec.letters[1]);

	return 0;
		
}
