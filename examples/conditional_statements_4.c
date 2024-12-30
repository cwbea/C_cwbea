#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch;
	
	printf("Do you want to download figlet\n\n");

	printf("press [Y/y] for yes or [N/n] for no : ");

	scanf("%c", &ch);

	if (ch == 'Y' || ch == 'y')
	{
		system("sudo apt-get install figlet -y");
		system("figlet cwbea and pen");
	}

	if (ch == 'N' || ch == 'n') exit(EXIT_FAILURE);

	return 0;

}
