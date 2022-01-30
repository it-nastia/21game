#include<iostream>
#include "core.h"


int main() {

	ColorStart();
	
	int *players = GetPlayers();
	int s;

	delete[] players;
	
return 0;
}
