#include <iostream>
#include <string>
using namespace std;
void ListStudent(string name[100],int score[100]);
char Calgrade(int);
int num;
int main()
{
	int  score[100];
	string name[100];
	
	cout << "Input Number of Student :";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		cout << "Input Name : ";
		cin >> name[i];
		cout << "Input score "<<i<<" : ";
		cin >> score[i];
		cout << endl;
	
	}
	
	ListStudent(name,score);
}
char Calgrade(int score)
{
	char grade;
	if (score >= 80 && score <= 100)
		(
		grade = 'A'
	    );
	
	else if (score >= 70) 
		(
		grade = 'B'
		);
	else if (score >= 60)
		(
		grade = 'C'
		);
	else if (score >= 50)
		(
		grade = 'D'
		);
	else 
		(
		grade = 'F'
		);
	return (grade);
}

void ListStudent(string name[100], int score[100])
{

	for (int i = 1; i <= num; i++)
	{

		cout << "Student Name : " << name[i] << "  Score " << i << " = " << score[i] << "  Your grade is " << Calgrade(score[i]);
		cout << endl;
	}

}