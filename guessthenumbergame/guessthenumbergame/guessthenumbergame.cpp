#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
	int randomNumber, guessNumber = 0, guessCount = 0 , score = 100;
	srand(time(0));
	
	randomNumber = (rand() % 100) + 1; 
	cout << "Guess a number between 1 and 100\n";
	do {
		cout << "Enter the number guesses: ";
		cin >> guessNumber;
		if (guessNumber == -1)
			break;
		if (guessNumber < 1 || guessNumber>100) {
			cout << "Please enter a number between 1 and 100\n";
			continue;
		}
		guessCount++;
		if (guessNumber == randomNumber) {
			cout << "Congratulations,you found it the " << guessCount << "th time";
			break;
		}
		else if (guessNumber > randomNumber)
			cout << "enter a smaller number";
		else
			cout << "enter a larger number";
		score -= 10;


	} while (guessNumber != -1);
	cout << "\n your score is " << (score < 0 ? 0 : score) << "\n";        
	return 0;
}