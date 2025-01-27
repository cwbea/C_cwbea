#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

#define MAX_SIZE 1024
#define STDIN    0

int main() {
	int fd;    //fd -> file descriptor
	char *filename = "kali_linux_3.0.md";
	ssize_t bytes_read, bytes_write;
	char buff[MAX_SIZE];

	fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 0644);
	if (fd < 0) {
		fprintf(stderr, "open errno : %d\t --> %s\n", errno, strerror(errno));
		close(fd);
		return 1;
	} else {
		fprintf(stdout, "successfully created\n");
	}

	bytes_read = read(STDIN, buff, MAX_SIZE);
	if (bytes_read == -1) {
		fprintf(stderr, "read errno : %d\t --> %s\n", errno, strerror(errno));
		close(fd);
		return 1;
	}

	buff[bytes_read + 1] = '\0';

	bytes_write = write(fd, buff, bytes_read);
	if (bytes_write == -1) {
		fprintf(stderr, "write errno : %d\t --> %s\n", errno, strerror(errno));
		close(fd);
		return 1;
	}
		

	printf("%s\n%d", buff, bytes_read);
	
	close(fd);

	return 0;

}
