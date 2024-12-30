#include <stdio.h>

struct {
	unsigned x;
	unsigned y;
} name;

struct {
    	unsigned lowest_bit :   10; //0000 0110
    	signed next3bits :	12; 
    	unsigned next2bits :	14;

} bitfield;

int main() {

	
	
	printf("name = %lu\n", sizeof(name));
	printf("bitfield = %lu\n", sizeof(bitfield));

	return 0;



	// 0000 0000 0000 0000 0000 0000 0000 0000 
	//  0    0    0    0    0    0    0    0
	//  0    0    0    0    0    1    1    0
	//
	//  0000 0000 0000 0000 0000 0000 0000 0110
}
