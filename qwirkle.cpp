
#include "LinkedList.h"
#include "GameController.h"
#include <iostream>
#include <stdio.h>


#define EXIT_SUCCESS    0
int main(int argc, char *argv[])
{


	if(argc==3)
	{
		std::cout << "Testing " << argv[1] << "..." << std::endl;
		FILE* rfile=freopen(argv[1], "r", stdin);
		FILE* wfile=freopen(argv[2], "w", stdout);
    if(rfile == NULL){
    std::cout << rfile << std::endl;}
		if(wfile == NULL){
		std::cout << wfile << std::endl;}

	}

	Game game; game.Start();
	getchar();
	getchar();
	return EXIT_SUCCESS;
}
