#include <stdio.h>

int main() {
       
	float score = 7.3;
        signed int population = 4294170842;
	unsigned int sum = 4294170842;
	printf("unsigned : %u\n", sum);
	printf("signed :  %d\n", population);
	printf("addr of sum : %p\n", sum);
	printf("addr of population : %p\n", population);
	printf("score : \t%f\n", score);
	return 0;
}
