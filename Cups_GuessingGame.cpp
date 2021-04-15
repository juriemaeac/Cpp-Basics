#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	string gameConfirm;
	string gameDifficulty;
	int gameGuess;
	int guessCount = 1;
	srand(time(NULL));
				
	cout << "==========================================" << endl;
	cout << "  ______                          ______ " << endl;
	cout << "  \\    /  THE CUP GUESSING GAME   \\    / " << endl;
	cout << "   \\__/      [A C++ Program]       \\__/  " << endl;
	cout << "      Can you guess where the rocks are?    "	<< endl;
	cout << "==========================================" << endl << endl;
	
	while(true){
		cout << "         Ready to Play? [Yes] [No]        " << endl;
		cin >> gameConfirm;
		
		if (gameConfirm == "Yes"){
			cout << "        ||Choose Game Difficulty||        " << endl;
			cout << "          [Easy] [Medium] [Hard]          " << endl;
			cin >> gameDifficulty;
			
			if(gameDifficulty == "Easy"){
			
				int randNum = (rand() % 2) + 1;
		  		cout << "==========================================" << endl;
				cout << "             ______     ______ " << endl;
				cout << "             \\    /     \\    / " << endl;
				cout << "              \\__/       \\__/  " << endl;
				cout << "               [1]       [2]              "	<< endl;
				cout << "==========================================" << endl << endl;
				cout << "     Can you guess where the rocks are?    "	<< endl;
				cin >> gameGuess;
			while(guessCount != 3){
					
					if(gameGuess == randNum){
						cout << " Congratulations you've guessed it correctly!" << endl;
						break;
					}
					else{
						cout << " Please Try Again :(" << endl;
						cin >> gameGuess;
						guessCount += 1;
					}
				}

			}
			
			else if(gameDifficulty == "Medium"){
			
				int randNum = (rand() % 3) + 1;
				cout << "==========================================" << endl;
				cout << "   ______     ______    ______             " << endl;
				cout << "   \\    /     \\    /    \\    /            " << endl;
				cout << "    \\__/       \\__/      \\__/          " << endl;
				cout << "     [1]        [2]       [3]        "	<< endl;
				cout << "==========================================" << endl << endl;
				cout << "     Can you guess where the rocks are?    "	<< endl;
				cin >> gameGuess;
				while(guessCount != 3){
					
					if(gameGuess == randNum){
						cout << " Congratulations you've guessed it correctly!" << endl;
						break;
					}
					else{
						cout << " Please Try Again :(" << endl;
						cin >> gameGuess;
						guessCount += 1;
					}

				}

			}
			
			else if(gameDifficulty == "Hard"){
			
				int randNum = (rand() % 4) + 1;		
				cout << "==========================================" << endl;
				cout << "   ______   ______    ______    ______         " << endl;
				cout << "   \\    /   \\    /    \\    /    \\    /         " << endl;
				cout << "    \\__/     \\__/      \\__/      \\__/     " << endl;
				cout << "    [1]       [2]       [3]       [4]   "	<< endl;
				cout << "==========================================" << endl << endl;
				cout << "     Can you guess where the rocks are?    "	<< endl;
				cin >> gameGuess;
				while(guessCount != 3){
					
					if(gameGuess == randNum){
						cout << " Congratulations you've guessed it correctly!" << endl;
						break;
					}
					else{
						cout << " Please Try Again :(" << endl;
						cin >> gameGuess;
						guessCount += 1;
					}
				}
				
			}
			
			else{
				cout << "[!] Please choose from the options above." << endl;
			}
			
		}	
		
		else if(gameConfirm == "No"){
			cout << "              [Exiting Game]              " << endl;
			return 0;
		}
		
		else{
			cout << "[!]Please Choose from options above." << endl;	
		}
	}
	

}
