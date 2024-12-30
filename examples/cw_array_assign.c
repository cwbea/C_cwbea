#include<stdio.h>

int main() {

	printf("\n one dimensional array of numbers\n");
	
	int salary[5] = {2,4,6,8,10};
	int i;

	for (i=0; i<5; i++)
	{
		printf("%d\n", salary[i]);
	}
	
  
	printf("\n one dimensional array of string\n");

	char bracelet[10] = {'b','l','u','e'};

	printf("%s\n", bracelet);


	printf("\n two dimensional array of numbers\n");

	int numbers[4][5] = {3,6,9,12,15,18,21,24,27,30,33,36,39,42,45,48,51,54,57,60};
	int m, n, row, column;
	row = 4;
	column = 5;
	

	for (m =0; m<row; m++)
	{
		for (n=0; n<column; n++)
		{
			printf("%d\t", numbers[m][n]);
		}
	
		printf("\n");
	}

	
	printf("\n two dimensional array of characters \n");

	char dictionary[20][20] = {"the sky is blue", "the field is green", "the tape is yellow","the sun is red"};
	int s, t, rrow, ccolumn;
	rrow = 20;
	ccolumn = 20;

	for (s=0; s<rrow; s++)
	{
		for (t=0; t<ccolumn; t++)
		{
			printf("%c", dictionary[s][t]);
		}

		printf("\n");
	}


	printf("\n three dimensional array of numbers \n");

	int draft[2][4][3] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48};
	int a, b, c,  src, rrrow, cccolumn;
	src = 2;
	rrrow = 4;
	cccolumn = 3;

	for (a=0; a<src; a++)
	{
		for (b=0; b<rrrow; b++)
		{
			for (c=0; c<cccolumn; c++)
			{
				printf("%d\t", draft[a][b][c]);
			}
			printf("\n");
		}
		printf("\n");
	}
			

	

	

	return 0;
	
	

}


