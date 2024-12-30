#include <stdio.h>

int main() 
{
	float pi;
	int age;
	int salary;
	char c;
	char *ch;

	pi = 3.14;
	c = 'x';
	ch = "i am a man";

	age = 42;
	salary = 10000;

	printf("age =  %d and memory size is: %d\n", age, sizeof(age));
	printf("salary =  %d and memory size is :%d\n", salary, sizeof(salary));
	printf("c = %c and memory size is : %d\n", c, sizeof(c));
	printf("ch = %s and memory size is : %d\n", ch, sizeof(ch));
	printf("pi = %f and memory size is : %d\n", pi, sizeof(pi));
	
	return 0;
}
