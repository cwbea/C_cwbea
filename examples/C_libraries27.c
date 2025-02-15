#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
	int *ptr = 0; int x, y;
	x = 12;
	y = 16;
	
	ptr = malloc(sizeof(int));

	if (ptr == 0) {
		fprintf(stderr, "malloc errno : %d --> %s\n", errno, strerror(errno));
		free(ptr);
		return 1;
	} else {
		printf("heap memory --> (int) allocated successfully\n");
	}

	*ptr = x;
	*ptr = y;
	
	printf("%d\n%d", (*ptr = *ptr - 4), *ptr);

	//*ptr = y;

	//printf("%d\n", *(ptr));

	
	free(ptr);

	return 0;
}

/* learning heap memory allocation using diagram
 *                 ptr
 * ----------------------------------------------
 * |           | 12  | 16  |                    |
 * ----------------------------------------------
 *               x     y
 * pc                  ^
 * */


