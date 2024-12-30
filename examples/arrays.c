#include<stdio.h>

int main() {
	
	int fred = 7;
	int numbers[50];
	int x = 0;
	int count[3], num[5];
	int cwbea[10], joe[10];
	int w[10];

	for ( int i = 0; i<50; i++ )
	{
		numbers[i] = i + 1;

		printf("numbers[%d] = %d\n", i, numbers[i]);
	}



	
	numbers[7] = 100;
	printf("numbers[%d] = %d\n", fred, numbers[fred]);

	numbers[x] =1850;
	printf("numbers[%d] = %d\n", x, numbers[x]);

	for ( x = 0; numbers[x] == 150; x++)
	{
		printf("numbers[%d] = %d\n", x, numbers[x]);
		break;
	}
	
	count[1] = 500;
	num[4] = 100 + count[1] * 2;
	printf("num[4] = %d\n", num[4]);

	if ( cwbea == joe )
		printf("equal\n");

	w[9] = 2000;
	printf("w[9] = %d\n", w[9]);
	printf("w[13] = %d\n", w[13]);

	w[100];
	

	return 0;



}
