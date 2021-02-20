#include <iostream>
#include "DVD.h"
#include "VideoGames.h"
using namespace std;

enum Choices { DVDS = 1, VIDG, QUIT };
int menu();

int main()
{
    int choice; 
    DVD d;
    VideoGames v;

    do {

        choice = menu();
        switch (choice) {
        case DVDS:

            d.selectGenre();
       
            break;

        case VIDG:

             v.selectGenre();
            
            break;
        }

    } while (choice != QUIT);
};

int menu() {
	int choice;
	cout << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Welcome to Redbox!" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Please Select A Format" << endl;
	cout << "1. DVD" << endl;
	cout << "2. Video Games" << endl;
	cout << "3. Quit" << endl;
	cout << "Please Enter Selection Number Here:  ";
	cin >> choice;
	return choice;
}







