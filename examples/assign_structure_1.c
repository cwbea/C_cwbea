#include <stdio.h>
 
struct  {
	int dailypay;
} salary;

int main() {
	
	salary.dailypay = 1500;

	printf("enter dailypay sum: ");

	scanf("%d", &salary.dailypay);

	printf("Dailypay = %d\n", salary.dailypay);

	return 0;
	

}
