#include <stdio.h>

int main() {
	int age, drinker, price;
	price = 1500;

	printf("please enter your age : ");

	scanf("%d", &age);


	if (age >= 18) printf("\nyou are qualified to drink alchohol, the price is %d\n", price);

	if (age < 18) printf("\nyou are not qualified to drink alchohol, go home and sleep\n");
	

	return 0;

}
