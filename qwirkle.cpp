
#include "LinkedList.h"
#include "GameController.h"
#include <iostream>
#include <stdio.h>
#define EXIT_SUCCESS    0

int main(int argc, char *argv[])
{
	if(argc==3)
	{
	//If command arguments more than 1, then we put the second argument as the file to stdin.
	//Third argument will be the file that stdout result
		std::cout << "testing " << argv[1] << "..." << std::endl;		//Print testing message
		freopen(argv[1], "r", stdin);						   		 	//Stdin from input file
		freopen(argv[2], "w", stdout);									//Stdout from output file

	}
	Game game;
	game.Start();
	getchar();
	getchar();
	return EXIT_SUCCESS;
}
