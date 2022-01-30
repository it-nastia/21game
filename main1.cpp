#include<iostream>
#include "core.h"


int main() {

	ColorStart();
	
	int *players = GetPlayers();

	delete[] players;
	
return 0;
}
