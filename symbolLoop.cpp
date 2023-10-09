#include <iostream>

using namespace std;

int main(){

	int rows;
	int columns;
	char symbol;


	cout << "How many rows? ";
	cin >> rows;

	cout << "How many columns? ";
	cin >> columns;

	cout << "How many symbol? ";
	cin >> symbol;

	for(int i = 1; i <= rows; i++){
		for(int j = 1; j <= columns; j++){
			cout << symbol;
		}
		cout << '\n';
	}
	return 0;
}