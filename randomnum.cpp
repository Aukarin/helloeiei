#include <iostream>
#include <time.h>
using namespace std;
int checkNum();
int num,i=0;
int numrand;
int main()
{
	srand(time(NULL));
	numrand = 1 + rand() % 10 ;
	cout << "####Welcome to guessing number game####\n";
	cout << "Secret number has been chosen \n";
	do{
		i++;
		cout << "Guess the number (1 to 10): ";
		cin >> num;
		checkNum();
	} while (num != numrand);
}
int checkNum()
{
	if (num < numrand){
		cout << "The secret number is lower \n";
	}
	if (num > numrand){
		cout << "The secret number is higher \n";
	}
	if (num == numrand){
		cout << "Congratulations! \n";
		cout << "The secret number is " << numrand << endl;
		cout << "You made "<< i <<" guesses\n";
	}
	return (0);
}
