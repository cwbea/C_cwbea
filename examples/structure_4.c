#include <stdio.h>

struct taxcode {
	int num;
}; 

int main() {
	
	int i;
	struct taxcode tcode[] = {20,40,60};

	for (i=0;i<3;i++)
		printf("tcode.num = %d\n", tcode[i].num);

	return 0;


}
