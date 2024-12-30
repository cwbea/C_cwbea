#include <stdio.h>
#include <unistd.h>  //For sleep function

int main() {
	while(1) {
	   printf("\t");
	   fflush(stdout); //Ensures the output is flushed out immediately
	   sleep(5);	  //wait for 5 seconds
	}
	
	return 0;
}
