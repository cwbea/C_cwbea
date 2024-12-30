#include <stdio.h>

int globalnum;
int main(){
	int localnum;
	printf("globalnum : %d\n", globalnum);
	printf("localnum : %d\n", localnum);
	return 0;
}
