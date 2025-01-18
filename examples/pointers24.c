#include <stdio.h>

void swap(int *x, int *y);

int main() {
	int x, y;
	x = 12;
	y = 14;

	printf("x = %d\n y = %d\n", x, y);

	swap(&x, &y);

	return 0;


}

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

	printf("*x = %d\n *y = %d\n", *x, *y);
}
