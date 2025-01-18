#include <stdio.h> 
#include <stdlib.h>

struct bptr{
	int x;
	struct bptr *link;
};

int main() {
	struct bptr *head = NULL;
	struct bptr *current = NULL;

	head = (struct bptr *) malloc(sizeof(struct bptr));
	head -> x = 12;
	head -> link = NULL;


	current = (struct bptr *) malloc(sizeof(struct bptr));
	current -> x = 14;
	current -> link = NULL;
	head -> link = current;

	current = (struct bptr *) malloc(sizeof(struct bptr));
	current -> x = 16;
	current -> link = NULL;
	head -> link -> link = current;

	while (head != NULL) {
		printf("x = %d\n", head -> x);
		head = head -> link;
	}

	free(head);
	free(current);

	return 0;
}

