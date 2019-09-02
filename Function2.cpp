#include <iostream>
#include <string>
using namespace std;
int update_balance(string , float , float &balance);
int main()
{
	
	float y, z, dollars, balance = 10000;
	string x;
	char command;
	int q;
	
	cout << "Exit with 0 \n";
	cout << "Your balance = " << balance << endl;
	do{
		
		cout << "Input command (1 or withdraw, 2 deposit): ";
		cin >> command;
		cout << "Input amount : ";
		cin >> dollars;
		x = command;
		y = dollars;
		
		update_balance(x, y, z);
		cout << "Your balance = " << update_balance(x, y, balance);
		cout << endl;

	} while (dollars != 0) ;
	cout << "End";
}
int update_balance(string command, float dollars, float &balance)
{
	
	
	if (command == "1")
	{
		balance= balance - dollars;

	}

	if (command == "2")
	{
		balance= balance + dollars;
	}
	
	return(balance);
}