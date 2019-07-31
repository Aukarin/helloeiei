#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch;
	string use, user2,pass,pass2;
		
	do{
		cout << "//////////Menu//////////\n";
		cout << "1.Register\n";
		cout << "2.Login\n";
		cout << "Q.Exit Program\n";
		cout << "________________________\n\n";
		cout << "Enter Menu : ";
		cin >> ch;
		if (ch == '1')
		{
			cout << "*********Register*********\n";
			cout << "Input Username : ";
			cin >> use;
			cout << "Input password : " ;
			cin >> pass;
			cout << endl;
		}
		else if (ch == '2')
		{
			
			cout << "*********Login*********\n";
			cout << "Input Username : ";
			cin >> user2;
			cout << "Input password : ";
			cin >> pass2;
			cout << endl;
		 if (user2 == use && pass2==pass ){
				cout << "Username or password correct ^___^ \n\n";
			}
			else cout << "!!!!Username or password incorrect Please try again!!!!\n\n";

		}
	} while (ch != 'Q');
	   cout <<"Exit program...\n";
		
	   
	   return(0);
}