#include <stdio.h>

union U {
	int param[2];
	struct {
		int num;
	} parameter;
 } system;

int main() {
	int i;
	union U typec;
	typec.param[0] = 21;
	typec.param[1] = 22;

	system.parameter.num = 23;

	for (i=0; i<2; i++)
		printf("parameter = %d\n", typec.param[i]);

	printf("system parameter = %d\n", system.parameter.num);

	return 0;
		

}
