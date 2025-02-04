#include <stdio.h>

int main() {
	char ptr[20];
	char buff[] = "Date is %s and Time is %s";

	sprintf(ptr, buff, __DATE__, __TIME__);
	printf("%s\n", ptr);	
	
	return 0;
}
