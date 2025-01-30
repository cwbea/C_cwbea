#include <stdio.h>

typedef int word;
typedef char* string;
typedef double long extralength;

int main() {
	word ball = 3;

	printf("ball = %d\n", ball);

	string color = "red";
	
	printf("color = %s\n", color);

	extralength memory = 100;

	printf("memory = %LF\n  memory size = %lu\n", memory, sizeof(extralength));

	return 0;	

}
