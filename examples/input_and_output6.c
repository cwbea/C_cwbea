#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

#define STDIN 0
#define STDOUT 1
#define MAX_SIZE 1024

int copy(char *src, char *dst);

int main(int argc, char *argv[]) {
	char *filename1 = "source.txt";
	char *filename2 = "destination.txt";
	int fd[2];
	ssize_t bytes_read, bytes_write;
	char buffer[MAX_SIZE];
	char buffer1[MAX_SIZE];
	int len;

	if (argc > 4) {
		perror("too many arguments passed\n");
		close(fd[0]);
		close(fd[1]);
		return 1;
	}

	fd[0] = open(filename1, O_CREAT | O_RDWR | O_APPEND, 0644);
	if (fd[0] < 0) {
		fprintf(stderr, "open errno : %d\t --> %s\n", errno, strerror(errno));
		close(fd[0]);
		close(fd[1]);
		return 1;
	}

	fd[1] = open(filename2, O_CREAT | O_RDWR | O_APPEND, 0644);
	if (fd[1] < 0) {
		fprintf(stderr, "open errno : %d\t --> %s\n", errno, strerror(errno));
		close(fd[0]);
		close(fd[1]);
		return 1;
	}

	bytes_read = read(STDIN, buffer, MAX_SIZE); 
	if (bytes_read == -1) {
		fprintf(stderr, "read errno : %d\t --> %s\n", errno, strerror(errno));
		close(fd[0]);
		close(fd[1]);
		return 1;
	}
	       	
	buffer[bytes_read + 1] = '\0';

	bytes_write = write(fd[0], buffer, bytes_read);
	if (bytes_write == -1) {
		fprintf(stderr, "write errno : %d\t --> %s\n", errno, strerror(errno));
		close(fd[0]);
		close(fd[1]);
		return 1;
	}

	//read(fd[0], buffer1, bytes_read);
	//write(fd[1], buffer1, bytes_read);

	len = copy(buffer, buffer1);

	write(fd[1], buffer1, bytes_read);
	printf("stringlength = %d\n", len);

	return 0;	
}

int copy(char *src, char *dst) {
	int i = 0;
	while ((dst[i] = src[i]) != '\0') {
		i++;
	}

	return i;
}
