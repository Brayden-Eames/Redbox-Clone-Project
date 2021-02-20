#pragma once
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


struct Description
{
	string movieTitle;
	string dvdRating;
	string dvdLength;
	string summary;

};

class DVD
{
	public:
		Description selectGenre();
		Description selectTitle(int option);
		Description confirmRental(string chosenTitle);
};



Description DVD::selectGenre()
{
	Description temp;
	int choice;
	cout << "NOTE: These titles are Redbox Regular Rentals (2 Days)" << endl;
	cout << "Please Select a Genre: " << endl;
	cout << "-----------------------------------------" << endl;
	cout << "1. Action/Adventure" << endl;
	cout << "2. Animated " << endl;
	cout << "3. Comedy" << endl;
	cout << "4. Documentary" << endl;
	cout << "5. Drama" << endl;
	cout << "6. Holiday" << endl;
	cout << "7. Horror" << endl;
	cout << "8. Family and Kids" << endl;
	cout << "9. Romance" << endl;
	cout << "10. Sci-fi/Fantasy" << endl;
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

	case 6:
		option = 6;
		selectTitle(option);
		break;

	case 7:
		 option = 7;
		selectTitle(option);
		break;

	case 8:
		option = 8;
		selectTitle(option);
		break;

	case 9:
		 option = 9;
		selectTitle(option);
		break;

	case 10:
		option = 10;
		selectTitle(option);
		break;


	}
	return temp;
}


Description DVD::selectTitle(int option)
{
	Description temp;
	string chosenTitle;
	ifstream fin;
		switch (option)
		{
			case 1:
			{

				 fin.open("aa_dvd.csv", ios::in);
				//ifstream fin("aa_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file 
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "Star Wars: The Rise of Skywalker";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "Avengers: Endgame";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Mad Max: Fury Road";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "Godzilla (2014)";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "Blade Runner: 2049";
					confirmRental(chosenTitle);
					break;
				}

				break;
			}
			case 2:
			{
				fin.open("a_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file a
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "Spiderman: Into the Spiderverse";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "The Lion King (2019)";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "The Secret Life of Pets 2";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "Hotel Transylvannia 3: Summer Vacation!";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "The Croods";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}

			case 3:
			{
				fin.open("c_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file a
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "Jumanji: The Next Level";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "Hitch";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Napoleon Dynamite";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "Knives Out";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "Gabriel Iglesias: One Show Fits All";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}
			case 4:
			{
				fin.open("doc_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file a
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "Apollo 11";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "Blackfish";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Mars: Inside SpaceX";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "DisneyNature's Elephant";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "The Tiger King: The Sh*tshow Special Edition";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}
			case 5:
			{
				fin.open("dr_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file a
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "1917";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "Joker";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Uncut Gems";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "A Quiet Place";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "Contagion";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}
			case 6:
			{
				fin.open("xmas_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file a
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "The Grinch (2018)";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "The Polar Express";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "A Charlie Brown Christmas";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "Dreamworks Holiday Classics";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "Rudolph the Red-Nosed Reindeer";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}
			case 7:
			{
				fin.open("hrr_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file a
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "IT Chapter 2";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "Countdown";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Doctor Sleep";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "Us";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "Scary Stories to Tell in the Dark";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}
			case 8:
			{
				fin.open("fam_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file a
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "Wreck-it-Ralph: Ralph Breaks The Internet";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "The Bee Movie";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Chicken Little";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "Frozen II";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "Onward";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}
			case 9:
			{
				fin.open("rom_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file a
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "My Big Fat Greek Wedding";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "The Proposal";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Pretty Woman";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "The Fault in Our Stars";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "Crazy Rich Asians";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}
			case 10:
			{
				fin.open("sff_dvd.csv", ios::in);

				while (!fin.eof())
				{

					cout << "----------------------" << endl;
					getline(fin, temp.movieTitle, ',');//read in movieTitle from .csv file   
					getline(fin, temp.dvdRating, ',');//read in the dvdRating from .csv file a
					getline(fin, temp.dvdLength, ',');// read in the dvdLength from .csv file 
					getline(fin, temp.summary, '\n');


					cout << temp.movieTitle << endl;
					cout << temp.dvdRating << endl;
					cout << temp.dvdLength << endl;
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

					chosenTitle = "Interstellar";
					confirmRental(chosenTitle);
					break;

				case 2:

					chosenTitle = "The Martian";
					confirmRental(chosenTitle);
					break;

				case 3:
					chosenTitle = "Terminator: Dark Fate";
					confirmRental(chosenTitle);
					break;

				case 4:
					chosenTitle = "Annihilation";
					confirmRental(chosenTitle);
					break;

				case 5:
					chosenTitle = "The Hobbit: An Unexpected Journey";
					confirmRental(chosenTitle);
					break;
				}

				break;


			}
		}
		return temp;
	}


Description DVD::confirmRental(string chosenTitle)
{
	Description temp;
	cout << "" << endl;
	cout << "" << endl;
	cout << "You have chosen: " << chosenTitle << endl;
	cout << "" << endl;
	cout << "Here's your DVD! " << endl;
	cout << " _________________" << endl;
	cout << "|# :           : #|" << endl;
	cout << "|  :   Redbox  :  |" << endl;
	cout << "|  :    DVD    :  |" << endl;
	cout << "|  :           :  |" << endl;
	cout << "|  :___________:  |" << endl;
	cout << "|   ___________   |" << endl;
	cout << "|  |           |  |" << endl;
	cout << "|  |           |  |" << endl;
	cout << "|__|___________|__|" << endl;
	cout << "" << endl;
	cout << "Enjoy your movie! " << endl;
	cout << "" << endl;
	cout << "You will now be returned to the main screen." << endl;
	cout << "" << endl;
	return temp;
}