#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
	int fd;
	char *filename = "mastering.c";
	
	fd = open(filename, O_WRONLY | O_CREAT, 0444);
	if (fd < 0) {
		fprintf(stderr, "open errno : %d\t---> %s\n", errno, strerror(errno));
		return 1;
	} else {
		fprintf(stdout, "created successfully");
	}

	return 0;
				
}
