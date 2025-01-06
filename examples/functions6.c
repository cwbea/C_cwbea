#include <stdio.h>

struct person_type {
	char name[5];
	int age;
} fred = {"fred", 50};
                                                            
void output_person_details(struct person_type body);
int diff(int a, int b);
                                                            
void main(void) {
	output_person_details(fred);
	printf("retiring in %d years", diff(fred.age, 65));
}
                                                            
void output_person_details(struct person_type body) {
	printf("\n%s is %d years old ", body.name, body.age);
}

int diff(int a, int b) {
	if (a > b) return a - b;
	else return b - a;
}
