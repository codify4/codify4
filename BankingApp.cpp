#include <iostream>

using namespace std;

//declaring functions
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    //do while loop for program to continue untill 4 is pressed
    do{
        cout << "****************\n";
        cout << "Enter your choice: \n";
        cout << "****************\n";
        cout << "1. Show Balance. \n";
        cout << "2. Deposit. \n";
        cout << "3. Withdraw. \n";
        cout << "4. Exit.\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        // switch for choosing what to do
        switch (choice)
        {
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit();
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
        case 4: cout << "Thanks for visiting!";
                break;
        default: cout << "Invalid!\n";
        }
    }while(choice != 4);
	return 0;
}

// Func for showing balance
void showBalance(double balance){
    cout << "Your balance is: " << balance << " Leke.\n";
}
double deposit(){
    double amount = 0;
    cout << "How much would you like to deposit(Leke)? ";
    cin >> amount;

    //Checking if amount deposited is negative
    if(amount > 0){
        return amount;
    }else{
        cout << "Invalid option!\n";
        return 0;
    } 
}
double withdraw(double balance){
    double withdrawn = 0;
    cout << "How much would you like to withdraw (Leke)? ";
    cin >> withdrawn;    

    // Checking if amount withdrawn is enough and if negative
    if(withdrawn > balance){
        cout << "Not enough money in the bank!\n";
        return 0;
    }else if(withdrawn < 0){
        cout << "Invalid option!\n";
        return 0;
    }else {
        cout << "You withdrew: " << withdrawn << "Leke\n";
        return withdrawn;
    }
}