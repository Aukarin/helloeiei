#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Name = " Aukarin Rungsatjaborirak";
	short scores1 = 100;
	short scores2 = 95;
	char  Grade = 'A';
	float GPA = 4;

	cout << "  My Name is : " << Name << endl;
	cout << " My scores 1 : " << scores1 << " point" << endl;
	cout << " My scores 2 : " << scores2 << " point" << endl;
	cout << "       Total : " << scores1 + scores2 << "point" << endl;
	cout << "       Grade : " << Grade << endl;
	cout << "         GPA : " << GPA << endl;

	return(0);
}