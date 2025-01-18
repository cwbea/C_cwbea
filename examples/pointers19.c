#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

struct tax {
	int number;
	char letter;                               
};

int main() {
	struct tax *sptr;
        	

	sptr = (struct tax *) malloc(sizeof(struct tax));

	if (sptr == NULL) {
		fprintf(stderr, "errno : %d -> %s\n", errno, strerror(errno));
		free(sptr);
		return 1;
	}

	sptr -> number = 12; 
	printf("number = %d\n", sptr->number);
	printf("number = %d\n", (*sptr).number);

	free(sptr);

	return 0;
}
 	                                                    
	
				

