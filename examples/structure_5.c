#include <stdio.h>
#include <string.h>

struct Friend {
	char birthday[4];
	
};

int main() {
	int i;
	struct Friend friend[] = {"cwb","ply","srs","rsc"};

	for (i=0;i<4;i++)
		printf("friend birthday = %s\n", friend[i].birthday);



	return 0;


}
