#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
//using namespace std;

void ColorStart(){
	
	HANDLE View = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(View, FOREGROUND_RED );
	
	std :: ifstream file("Lets start!.txt");

	if(!file.is_open())
		std :: cout << "LETS START!!!";
	else{
		std::string str;
		while(!file.eof()){
			str = "";
			std :: getline(file, str);
			std :: cout << str << std :: endl;
		} 
		
	}
	file.close();
	
	HANDLE Normal = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(Normal, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}	

int* GetPlayers(){
	
	std :: cout << "  How many players will play with you?  ";
	
	int nOfBots;
	std :: cin >> nOfBots;
	
	int nOfPlayers = nOfBots + 1;
	
	int *players = new int [nOfPlayers];
	for(int i = 0; i < nOfPlayers; i++){
		players[i] = i + 1;
	}
		
	return players;
}

	





