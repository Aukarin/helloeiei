#include <iostream>
using namespace std;
int main()
{
	float Celsius, Fahrenheit;
	cout << "Enter Celsius temperature: ";
	cin >> Celsius;
	Fahrenheit = Celsius * 9 / 5 + 32;
	cout << "\n" << Celsius << " Celsius " << " to " << Fahrenheit << " Fahrenheit :";
	cout << ((Fahrenheit>70) == 0 ? " Now weather in Thailand is COOL" : " Now weather in Thailand is HOT\n") << endl;
	return(0);
}
