#include <stdio.h>

void ChangeName(char string[]);
char name[] = "hello ben";

int main() {
	ChangeName(name);
	printf("name is %s\n", name);
}


void ChangeName(char string[]) {
	string[6] = 'p';
}
