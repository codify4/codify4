#include <iostream>

using namespace std;

int main(){

	double temp;
	char unit;

	cout << "C = Celcius\n";
	cout << "F = Fahrenheit\n";
	cout << "What unit would u like to convert to? ";
	cin >> unit;

	if (unit == 'F' || unit == 'f'){
		cout << "Enter temperature in Celcius: ";
		cin >> temp;

		temp = (1.8 * temp) + 32;
		cout << "The temperature is: " << temp << "F\n";
	}
	else if (unit == 'C' || unit == 'c'){
		cout << "Enter temperature in Fahrenheit: ";
		cin >> temp;

		temp = (temp - 32) / 1.8;
		cout << "The temperature is: " << temp << "C\n";
	}
	else{
		cout << "Please enter in only C or F!";
	}
	return 0;
}