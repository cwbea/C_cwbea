#include <stdio.h>
#include <stdlib.h>

union unumtype {
	float fnum;
	int inum;
};
union unumtype typec;

int main() {
	
	union unumtype *f;
	union unumtype *i;

	f = malloc(sizeof(union unumtype));
	i = malloc(sizeof(union unumtype));

	f -> fnum = 12.34;
	i -> inum = 14;

	printf("fnum = %f\n", f -> fnum);
	printf("inum = %d\n", i -> inum);

	free(f);
	free(i);

	return 0;


}
