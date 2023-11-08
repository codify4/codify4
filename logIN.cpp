#include <iostream>

using namespace std;

int main(){
	
	string usernameS, pswS;
	string usernameL, pswL;
	char logIn;

	//Sign IN
    cout << "********SIGN IN**********\n";
	cout << "Enter a Username: ";
	getline(cin, usernameS);
	cout <<  "Enter a Password: ";
	cin >> pswS;

	//Log IN
	cout << "Do you want to log in?(y/n) ";
	cin >> logIn;

	if(logIn == 'y' || logIn == 'Y'){
        do{
            cout << "********LOG IN**********\n";
            cout << "Enter your Username: ";
            getline(cin, usernameL);
            cout <<  "Enter your Password: ";
            cin >> pswL;
            if(usernameL == usernameS && pswL == pswS){
                cout << "Welcome!";
            }
            else if(usernameL != usernameS || pswL != pswS){
                cout << "Incorrect username or password!\n";
                cout << "*********RETRY!***********\n";
            }
        }while(usernameL != usernameS || pswL != pswS);
	}
	else if(logIn == 'n' || logIn == 'N'){
		cout << "Bye!";
	}
    else{
        cout << "Incorrect option!\n";
    }
	
	return 0;
}