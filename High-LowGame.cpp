//Stephanie Lab Group #2
//High-Low Game
#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;

int main()
{
	int seed, systemNum, choice, guesses = 0;
	char again;

	do
	{
		cout << "A random number has been generated. Try and guess it!\n" << endl;

		seed = (time(NULL));

		srand(seed);

		systemNum = (1 + rand() % 1000);

		do
		{
			cout << "Your guess: ";
			cin >> choice;

			if (choice > systemNum)
			{
				cout << "Your guess is too high!\n\n";
			}

			else if (choice < systemNum)
			{
				cout << "Your guess is too low!\n\n";
			}

			guesses++;
		} while (choice != systemNum);

		cout << "\nCongratulations! Your guess is correct!" << endl;
		cout << "The number was " << systemNum << endl;
		cout << "It took you " << guesses << " try/tries!\n" << endl;
		cout << "Play again? [y/n]: ";
		cin >> again;

		system("cls");
		guesses = 0;

	} while (again == 'Y' || again == 'y');


	return 0;
}
