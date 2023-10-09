#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
	
	// Variable for exiting program
	string exit;

	// Variables for basic operations
	double num1;
	double num2;
	string op;
	double num3;

	// Variables for roots
	double sqrNum;
	double cbrNum;
	string advanced;
	string root;

	// Variables for raising to power
	double baseNum;
	double exponent;
	double result;

	while(true){
		cout << "Press 1 for Deafult calculations, press 2 for advances ones: ";
		cin >> advanced;

		//The Calculator
		if (advanced == "1"){
			cout << "Enter a number: ";
			cin >> num1;
			
			cout << "Enter an operator(+,-,*,/): ";
			cin >> op;
			
			cout << "Enter another number: ";
			cin >> num2;
			
			if (op == "+"){
				num3 = num1 + num2;
				cout << "The result is: " << num3 << '\n';
			} else if (op == "-"){
				num3 = num1 - num2;
				cout << "The result is: " << num3 << '\n';
			} else if (op == "*"){
				num3 = num1 * num2;
				cout << "The result is: " << num3 << '\n';
			}else if (op == "/"){
				num3 = num1 / num2;
				cout << "The result is: " << num3 << '\n';
			}else{
				cout << "U DUMB OR SMTH???" << '\n';
			}

		} else if (advanced == "2"){
			cout << "This is the advanced maths tab." << '\n';
			cout << "Press 2 to find the SquareRoot of a number OR press 3 to find the CubeRoot of a number OR press 4 to find a number to a power: ";
			cin >> root;

			if (root == "2"){
				cout << "Enter a number to get it's SquareRoot." << '\n';
				cin >> sqrNum;
				cout << "The SquareRoot of your number is " << sqrt(sqrNum) << '\n';
			} 
			else if (root == "3"){
				cout << "Enter a number to get it's CubeRoot." << '\n';
				cin >> cbrNum;
				cout << "The CubeRoot of your number is: " << cbrt(cbrNum) << '\n';
			}
			else if (root == "4"){
				cout << "Enter the number for a base: ";
				cin >> baseNum;
				cout << "Enter the exponent: ";
				cin >> exponent;

				result = pow(baseNum, exponent);
				cout << "The result is: " << result << '\n';
			}
		}
		
		// Taking user input on whether to exit program or not.
		cout << "Do you want to exit(y/n)? ";
		cin >> exit;
		if (exit == "y"){
			break;
		}else if (exit == "n"){
			continue;
		}
	}
	return 0;
}