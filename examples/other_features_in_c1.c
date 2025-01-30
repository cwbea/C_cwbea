#include <stdio.h>

enum color {
	red = 3,
	white, 
	blue = 7,
	green,
};

enum bool {
	false,
	true,
};

int compare(int x, int y);

int main() {
int x, y, cmp;

printf("input value of x :");
scanf("%d", &x);

printf("input value of y :");
scanf("%d", &y);



printf("red : %d\n", red);
printf("white : %d\n", white);
printf("blue : %d\n", blue);
printf("green : %d\n", green);

cmp = compare(x, y);

if (x > y) {
	printf("comparison of x and y is true : %d\n", cmp);
} else 
	printf("comparison of x and y is false : %d\n", cmp);
	

return 0;

}

int compare(int x, int y) {
	if (x > y) {
		return true;
	} else return false;
}
