#include <stdio.h>

union unumtype {
	float fnum;
	int inum;
	int i;
	int j;
	long double k;
	
} unumber, uarray[10];

int main()  {
	union unumtype typec;
	 unumber.i = 14;
	uarray[10].j = 15;
	typec.inum = 12;
	typec.fnum = 15.55;
	typec.k = 21;
	
	//typec.inum = 12;
	printf("inum = %d\n", typec.inum);

	//typec.fnum = 15.55;
	printf("fnum = %f\n", typec.fnum);

	//typec.k = 21;
	printf("k = %LF\n", typec.k);

	printf("unumber = %d\n", unumber.i);
	printf("uarray = %d\n", uarray[10].j);

	return 0;

}
