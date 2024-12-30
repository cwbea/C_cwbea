#include <stdio.h>

int main() {
	int var = 5;
	int i = 0;

	here :
       		while (i<var) {
			printf("say input\n");
			i++;
		}
		i = 0;

	goto here;

	return 0;	


}
