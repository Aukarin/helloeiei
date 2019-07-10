#include <iostream>
using namespace std;
int main()
{
	int score ;
	cout << "Enter score  0-100 : ";
	cin >> score;
	cout << "score : " << score << endl;
	cout << ("You got a grade : ");
	if (score >= 0 && score <= 59)
		(
		 cout << "F\n"
		);
	else if (score >= 60 && score <= 69)
		(
		 cout << "D\n"
		);
	else if (score >= 70 && score <= 79)
		(
		 cout << "C\n"
		);
	else if (score >= 80 && score <= 89)
		(
		 cout << "B\n"
		);
	else if (score >= 90 && score <= 100)
		(
		 cout << "A\n"
		);
	else
		(
		 cout << "Score error, please check the score. \n"
		);

	return(0);

}