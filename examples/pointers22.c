#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int port;
	char *ip = NULL;

	if (argc > 3) {
		printf("too much arguments passed\n");
		return 1;
	}
	
	ip = argv[1];
	port = atoi(argv[2]);

	printf("network ip -> %s\t %d\n", ip, port);

	return 0;

}


	

