#include <stdio.h>

struct Bitfield {
      unsigned int field1 : 8;  // 8 bits
	unsigned int field2 : 16; // 16 bits 
	unsigned int field3 : 16; // 16 bits
	unsigned int field4 : 16; // 16 bits
};

int main() {
	printf("size of struct Bitfield = %lu bytes\n", sizeof(struct Bitfield));

        if ((sizeof(struct Bitfield) > 1 && sizeof(struct Bitfield) > 4 && sizeof(struct Bitfield) < 8))
   	{ 
		printf("The Bitfield is greater than 1 byte, greater than 4 bytes and less than 8 bytes.\n");
	} 	

 	else { 
     		printf("The Bitfield is greater than 1 byte, greater than 4 bytes but not greater than 8 bytes.\n");
	}	

 	return 0;

}
