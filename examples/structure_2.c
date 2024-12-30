#include <stdio.h>

struct {
	int number;
} salary;

int main() {
	salary.number = 1500;

	printf("salary.number = %d", salary.number);

	return 0;



}
