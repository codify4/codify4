#include <iostream>
#include <windows.h>

using namespace std;

int main(){

    double lek;
    char currency;
    double usd;
    double euro;
    double pound;
    char exit;

    cout << "Enter amount in lek: ";
    cin >> lek;

    cout << "Enter currency character to convert to($, e, p): ";
    cin >> currency;

    if(currency == '$'){
        usd = lek / 99.82;
        cout << "Your amount is: $" << usd << '\n';
    }
    else if(currency == 'e'){
        euro = lek / 106.2;
        cout << "Your amount is: " << euro << " Euro."<< '\n';
    }
    else if(currency == 'p'){
        pound = lek / 122.1;
        cout << "Your amount is: " << pound << " GBP."<< '\n';
    }
    Sleep(5000);
	return 0;
}