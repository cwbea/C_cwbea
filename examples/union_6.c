#include <stdio.h>


struct Bitfield {
	unsigned Bitfield1 : 20;
	unsigned Bitfield2 : 6;
	unsigned Bitfield3 : 7;
};	
		
int main() {
	struct Bitfield bit;
	bit.Bitfield1 = 2;
	bit.Bitfield2 = 7;
	bit.Bitfield3 = 3;

	printf("size of struct Bitfield = %d bytes\n", sizeof(struct Bitfield));
	

	if (bit.Bitfield1 < sizeof(struct Bitfield)) {
		printf("bit.Bitfield1 is within the range of %d bytes\n", sizeof(struct Bitfield));
	}

	else if (bit.Bitfield1 > sizeof(struct Bitfield)) {
		printf("bit.Bitfield1 is out of range of %d bytes\n", sizeof(struct Bitfield));
	}

	if (bit.Bitfield2 < sizeof(struct Bitfield)) {
		printf("bit.Bitfield2 is within the range of %d bytes\n", sizeof(struct Bitfield));
	}

	else if (bit.Bitfield2 > sizeof(struct Bitfield)) {
		printf("bit.Bitfield2 is out of range of %d bytes\n", sizeof(struct Bitfield));
	}

	if (bit.Bitfield3 < sizeof(struct Bitfield)) {
		printf("bit.Bitfield3 is within the range of %d bytes\n", sizeof(struct Bitfield));
	}

	else if  (bit.Bitfield3 > sizeof(struct Bitfield)) {
		printf("bit.Bitfield3 is out of range of %d bytes\n", sizeof(struct Bitfield));
	}

	return 0;

}
