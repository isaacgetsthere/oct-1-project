#include <cmath>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string userChoice;
    cout << "This is a rock, paper, scissors game!\n";
	cout << "Please enter your choice (rock, paper, or scissors): ";
	getline(cin, userChoice);
	
	string computerChoice;
	int computerNum = rand() % 3;
	if (computerNum == 0)
	{
		computerChoice = "rock";

	}
	else if (computerNum == 1)
	{
		computerChoice = "paper";
	}
	else
	{
		computerChoice = "scissors";
	}
	cout << "Computer chose: " << computerChoice << endl;
	if ((userChoice == "rock" && computerChoice == "scissors") ||
		(userChoice == "paper" && computerChoice == "rock") ||
		(userChoice == "scissors" && computerChoice == "paper")) 
	{
		cout << "You win!" << endl;
	}
	else {
		cout << "Computer wins!" << endl;
	}
}
