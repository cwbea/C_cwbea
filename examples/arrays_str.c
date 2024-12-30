#include<stdio.h>

int main() {
	

	char man[10]; /* an array identified as man of type char is  allocated  memory of 10 bytes,  each should be of type char
			 (which is 1 byte, 1 byte = 8 bits) making a total of 10 bytes, each memory chunk would be of size 1 byte */

	man[0] = 'c'; /* values which are characters hence the use of single quotes  being plugged into allocated memory, in this first index
			 man[0], c is stored,  size is 1 byte */
	man[1] = 'w'; /* second index taking in value of single character 'w' size 1 byte */
	man[2] = 'b'; /* third index taking in value of single character 'b' size 1 byte */
	man[3] = 'e'; /* fourth index taking in value of single character 'e' size 1 byte */
	man[4] = 'a'; /* fifth index taking in value of single character 'a' size 1 byte */
	man[5] = 0;  /* null byte ending the array of characters also qualifying the whole array  as a character string */

	printf("man = %s\n", man); /* %s used to print out the string */
	
	int color[10]; /* allocates memory of 10 bytes, each should be of type int ( which is 4 byte, 4 byte = 32 bits)
       			 making a total of 40 bytes	*/
	color[0] = 3; /* first index is initialised to value of 3 of size 4 bytes */
	color[1] = 6; /* second index is initialised to a value of 6 of size 4 bytes */
	color[2] = 5; /* third index is initialised to a value of 5 of size 4 bytes */
	color[3] = 9; /* fourth index is initialised to a value of 9 of size 4 bytes */
	
	 
	for (int i = 0; i<10; i++)  /* is examined to ensure the conditions are fufilled before the array or string of characters 
				       are printed out correctly */
		printf("color = %d\n", color[i]); /*integers or values of the corresponding indices are printed using %d
	       					  following condtions in the for statement*/

	/* char str = "fred"; this is an error unless char becomes a pointer or array  as in "char*". */
	

	char size[] = "fred"; /* array of string */
	int breadth[] = {1,23,45,66,78,99}; /* block of statements because of the use of curly braces */
	for ( int i = 0; i<6; i++ )
		printf("breadth = %d\n", breadth[i]);

	char *model[] = {"model", "unit", "thrust", "area"}; /* pointers to array */

	char length[] = "length is defined as distance per unit area"; /* array of string */

	if ( size == "fred" )
		printf("true\n");
	else
		printf("false\n");

	printf("\n\n"); /* two new line */
	char yellow[50]; /* allocate memory of 50 bytes of type char */
	printf("input string : "); /* printing of prompt to direct user what to do */
	fgets(yellow, 50, stdin); /* accepts 3 arguments into its 3 parameters  i.e "50", "yellow", "stdin", argument means plugged in values */
	printf("\n you entered : %s\n", yellow); /* %s prints string of this array yellow */
	

	/* 2 Dimensional  Arrays */
	int chessboard[3][4]; /*array declaration indicating 3 rows and 4 columns */
	chessboard[0][0] = 5; /*the arguments in the for-loop statement are first examined to see that the conditions are satisfied here, after 
				i is intialised to 0, i  becomes less than row then we move into the block statement, otherwise the for loop
				statement is ignored and program proceeds to the return key function, also if conditions are not satisfied in the 				block statement, program automatically moves to the outer for loop statement and if in turn it is not satisfied
				program proceeds to the return key function and ends, when the program examines the condition in the block 
				statement and is satisfied it proceeds to the printf functions which allows the integers to be printed by virtue 				of the %d format,the \t enables a horizontal tab to be created for the display of our reults,
 	       	the comma seprates the two different objects in the printf statement,the program then passes 
				into the object of the array i.e chessboard[i][j] which then automatically assigns the value of the index of 
				the row and column, once this is done the program moves back into the inner for loop and executes the increment 
				function i.e j++(0+1) in this case for chessboard[0][1] = 9;,code  then moves to check j<col; is satisfied and
			       	then moves to the printf function once again 
				printing out the corresponding value of the index of the row and column, note inner loop condtions must first   				 be exhausted hence i remains 0, the process continues */				
				
				
				
	chessboard[0][1] = 9; /* program moves back to the inner for loop, j is incremented by 1 i.e i++, code moves to the printf statement
				 and the value of the index of i and j is printed */ 
	chessboard[0][2] = 7; /* repeat */
	chessboard[0][3] = 11; /* repeat */


	chessboard[1][0] = 13; /*at this point inner loop condition was no longer satisfied i.e j<col becomes false, hence program skips code
				 to the next line i.e printf("\n") which prints a new line, taking the code back to the top of the for loop
				statement execting first i++, incrementing by 1 (0+1), then check to see if it satisfies i<row which it does i.e
			      1>3, it then moves into the inner for loop, in the inner for loop everything resets i.e j = 0 and condtions 
		      		satisfies j>col, hence the value of the index of i and j are printed */ 	      

	chessboard[1][1] = 15; /* program moves back to the inner for loop, j is incremented by +1 i.e i++, code moves to the printf statement
				  and the value of the index of i and j is printed */
	chessboard[1][2] = 17; /* repeat */
	chessboard[1][3] = 19; /* repeat */

	chessboard[2][0] = 21; /*at this point inner loop condition was no longer satisfied i.e j<col becomes false,code skips to new line i.e 
				 using printf("\n") taking the code back to the top of the for loop statement which then first executes i++ 
				 incrementing by 1(1+1 = 2), and then check to see i<row is satisfied which it does i.e 2>3, it then moves into 
				 the inner for loop statement, once again j = 0 and condition satisfies j>col, hence the value of the index of 
				 i and j are printed */
	chessboard[2][1] = 23; /*code moves back to the inner for loop, j is incremented by +1 from i++, code proceeds to the printf statement 
				 and the value of the index of i and j is printed */
	chessboard[2][2] = 25;  /*repeat */
	chessboard[2][3] = 27;  /* repeat */

				/* at this point j<col no longer holds true codes proceeeds to new line moving to the top of the code, which then
				 * * examines i++, (2+1 = 3) , i<row; becomes false, the whole program then skips to the return o; indicating end
				 * of the program. */

	
	int element = chessboard[1][2];
	printf("chessboard[1][2] = %d\n", element);

	int i, j, row, col; /* local variable declaration */
	row = 3;	   /* initilisation of row */
	col = 4;	  /* initialisation of column */
	

	for (i = 0; i<row; i++) /* i will only increment if the inner loop is false */ 
	{
		for (j = 0; j<col; j++) /* until this decision is no longer satisfied, then the outer loop will increment */
		{
			printf("%d\t", chessboard[i][j]); /* prints according to the index increment of i and j */
		}
		printf("\n"); /* hence the inner loop condition becomes false , it prints new line */
	}




/* 3 Dimensional Arrays */

	printf("\n\n");

	int three_d_arrays[3][4][5] = 
	{
		{
			{0,1,2,3,4},
			{5,6,7,8,9},
			{9,8,7,6,5},
			{4,3,2,1,0},
		},

		{
			{0,1,2,3,4},
			{5,6,7,8,9},
			{9,8,7,6,5},
			{4,3,2,1,0},
		},

		{
			{0,1,2,3,4},
			{5,6,7,8,9},
			{9,8,7,6,5},
			{4,3,2,1,0}
		},
	};

	int src, rows, cols, m, n, k;

	src = 3; rows = 4; cols = 5;

	for (m = 0; m<src; m++)
	{
		printf("three_d_arrays");

		for (n = 0; n<rows; n++)
		{
			for (n = 0; n<cols; n++)
			{
				printf(" %d\t", three_d_arrays[m][n][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	/* Giving input from 2 Dimensional Arrays */

/*	char salary[2][20];
	int v, w, role, column;
	role = 2;
	column = 20;

	printf("\n\n Enter employee's name :");

	for (v = 0; v<role; v++)
	{ 
		for (w = 0; w<column; w++)
		{
			scanf("%c", &salary[v][w]);
		}
	}

	printf("\n\n This is your input in roles and column\n\n");

	for ( v = 0; v<role; v++)
	{
		for (w=0; w<column; w++)
		{
			printf("%c", salary[v][w]);
		}
		printf("\n");
	}
*/
	

	/* string of one dimensional array */

	printf("\n\n this is a one dimensional array\n\n");

	char field[20] = "power is work";

	printf("%s\n", field);

	
	
	/* string of two dimensional array note plugging in values makes array more useful as compared to using scanf function	      */

	printf("\n\n this is a two dimensional array\n\n");

	char notebook[20][40] = {"the girl is good","the boy is a rascal","the man is silent","the woman is not good"};
	
		
	printf("\n\n");


	int s, t, roll, ccolumn;
	
	roll = 20;
	ccolumn = 40;

	for (s =0; s<roll; s++)
	{
		for (t = 0; t<ccolumn; t++)
		{
			printf("%c", notebook[s][t]);
		}

		printf("\n");
	}




	return 0;

}
