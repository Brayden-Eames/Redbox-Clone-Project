#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


struct Description2
{
	string gameTitle;
	string gameRating;
	string gameYear;
	string summary;

};

class VideoGames
{
public: 
	Description2 selectGenre();
	Description2 selectTitle(int option);
	Description2 confirmRental(string chosenTitle);
};


Description2 VideoGames::selectGenre()
{
	Description2 temp;
	int choice;
	cout << "" << endl;
	cout << "NOTE: These titles are Redbox Extended Rentals (30 Days)" << endl;
	cout << "" << endl;
	cout << "Please Select a Genre: " << endl;
	cout << "-----------------------------------------" << endl;
	cout << "1. First Person Shooter" << endl;
	cout << "2. Role-Playing Game " << endl;
	cout << "3. Racing" << endl;
	cout << "4. Horror" << endl;
	cout << "5. Real-Time Strategy" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "Enter your Genre selection here: ";
	cin >> choice;
	int option;
	switch (choice)
	{
	case 1:
		option = 1;
		selectTitle(option);
		break;

	case 2:
		option = 2;
		selectTitle(option);
		break;

	case 3:
		option = 3;
		selectTitle(option);
		break;

	case 4:
		option = 4;
		selectTitle(option);
		break;

	case 5:
		option = 5;
		selectTitle(option);
		break;

	}
	return temp;

}


Description2 VideoGames::selectTitle(int option)
{
	Description2 temp;
	string chosenTitle;
	ifstream fin;
	switch (option)
	{
			case 1:
			{
				fin.open("fps_vg.csv", ios::in);
				//ifstream fin("aa_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.gameTitle, ',');
					getline(fin, temp.gameRating, ',');
					getline(fin, temp.gameYear, ',');
					getline(fin, temp.summary, '\n');


					cout << temp.gameTitle << endl;
					cout << temp.gameRating << endl;
					cout << temp.gameYear << endl;
					cout << temp.summary << endl;

				}
				fin.close();

				int selectTitle;
				cout << "" << endl;
				cout << "" << endl;
				cout << "Select a Title: ";
				cin >> selectTitle;

				switch (selectTitle)
				{
				case 1:

					chosenTitle = "Halo: The Master Chief Collection";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "Call of Duty: Modern Warfare Remastered";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Grand Theft Auto 5";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}
			case 2:
			{
				fin.open("rpg_vg.csv", ios::in);
				//ifstream fin("aa_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.gameTitle, ',');
					getline(fin, temp.gameRating, ',');
					getline(fin, temp.gameYear, ',');
					getline(fin, temp.summary, '\n');


					cout << temp.gameTitle << endl;
					cout << temp.gameRating << endl;
					cout << temp.gameYear << endl;
					cout << temp.summary << endl;

				}
				fin.close();

				int selectTitle;
				cout << "" << endl;
				cout << "" << endl;
				cout << "Select a Title: ";
				cin >> selectTitle;

				switch (selectTitle)
				{
				case 1:

					chosenTitle = "The Elder Scrolls V: Skyrim";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "Final Fantasy 7 Remake";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "The Witcher 3: Wild Hunt";
					confirmRental(chosenTitle);
					break;
				}
				break;
		
			}
			case 3:
			{
				fin.open("rc_vg.csv", ios::in);
				//ifstream fin("aa_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.gameTitle, ',');
					getline(fin, temp.gameRating, ',');
					getline(fin, temp.gameYear, ',');
					getline(fin, temp.summary, '\n');


					cout << temp.gameTitle << endl;
					cout << temp.gameRating << endl;
					cout << temp.gameYear << endl;
					cout << temp.summary << endl;

				}
				fin.close();

				int selectTitle;
				cout << "" << endl;
				cout << "" << endl;
				cout << "Select a Title: ";
				cin >> selectTitle;

				switch (selectTitle)
				{
				case 1:

					chosenTitle = "Forza Horizon 4";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "The Crew 2";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Forza Motorsport 7";
					confirmRental(chosenTitle);
					break;
				}

				break;

			}
			case 4:
			{
				fin.open("hrr_vg.csv", ios::in);
				//ifstream fin("aa_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.gameTitle, ',');
					getline(fin, temp.gameRating, ',');
					getline(fin, temp.gameYear, ',');
					getline(fin, temp.summary, '\n');


					cout << temp.gameTitle << endl;
					cout << temp.gameRating << endl;
					cout << temp.gameYear << endl;
					cout << temp.summary << endl;

				}
				fin.close();

				int selectTitle;
				cout << "" << endl;
				cout << "" << endl;
				cout << "Select a Title: ";
				cin >> selectTitle;

				switch (selectTitle)
				{
				case 1:

					chosenTitle = "Resident Evil 3: Nemesis Remastered";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "The Evil Within 2";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Outlast 2";
					confirmRental(chosenTitle);
					break;
				}

				break;
			}
			case 5:
			{
				fin.open("rts_vg.csv", ios::in);
				//ifstream fin("aa_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.gameTitle, ',');
					getline(fin, temp.gameRating, ',');
					getline(fin, temp.gameYear, ',');
					getline(fin, temp.summary, '\n');


					cout << temp.gameTitle << endl;
					cout << temp.gameRating << endl;
					cout << temp.gameYear << endl;
					cout << temp.summary << endl;

				}
				fin.close();

				int selectTitle;
				cout << "" << endl;
				cout << "" << endl;
				cout << "Select a Title: ";
				cin >> selectTitle;

				switch (selectTitle)
				{
				case 1:

					chosenTitle = "Halo Wars 2";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "Stellaris Xbox Edition";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Age of Wonders: Planetfall";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}

	}

	return temp;
}

Description2 VideoGames::confirmRental(string chosenTitle)
{


	Description2 temp;
	cout << "" << endl;
	cout << "" << endl;
	cout << "You have chosen: " << chosenTitle << endl;
	cout << "" << endl;
	cout << "Here's your Video Game! " << endl;
	cout << " _________________" << endl;
	cout << "|# :           : #|" << endl;
	cout << "|  :   Redbox  :  |" << endl;
	cout << "|  :   Video   :  |" << endl;
	cout << "|  :   Game    :  |" << endl;
	cout << "|  :___________:  |" << endl;
	cout << "|   ___________   |" << endl;
	cout << "|  |           |  |" << endl;
	cout << "|  |           |  |" << endl;
	cout << "|__|___________|__|" << endl;
	cout << "" << endl;
	cout << "Enjoy your video game! " << endl;
	cout << "" << endl;
	cout << "You will now be returned to the main screen." << endl;
	cout << "" << endl;
	return temp;
}