#include <iostream>
using namespace std;
int main(){
	int a[3][4];
	for (int i = 1; i<3; i++){
		for (int j = 1; j<4; j++){
			cout << "Input [" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
	}
	cout << "********* Display Array **************\n";
	for (int i = 1; i<3; i++){
		for (int j = 1; j<4; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}


	cout << "******** Transpose Matrix ***********\n";

	for (int j = 1; j<4; j++){
		for (int i = 1; i<3; i++){
			cout << a[i][j] << " ";


		}	cout << endl;
	}


	return 0;
}