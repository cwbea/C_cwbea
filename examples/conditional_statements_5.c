#include <stdio.h>
#include <stdlib.h>

int main() {
	int squid_game, lucky_number;
	lucky_number = 77;

	system("figlet cwbea squid game");

	printf("\n\ninput your lucky number : ");

	scanf("%d", &squid_game);

	if (squid_game == lucky_number) 
	{
		system("figlet you won");
		exit(EXIT_SUCCESS);
	}

	if (squid_game != lucky_number) 
	{
		system("figlet you lost");
		exit(EXIT_FAILURE);
	}

	if (squid_game < lucky_number)
	{
		system("figlet you lost");
		exit(EXIT_FAILURE);
	}

	if (squid_game > lucky_number) 
	{
		system("figlet you lost");
		exit(EXIT_FAILURE);
	}

	return 0;


}
