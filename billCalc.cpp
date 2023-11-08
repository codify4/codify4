#include <iostream>
#include <map>

using namespace std;

//Function to calculate the total of the order
void totalBill(){

    map <string, int> menu;

    menu.insert({ "Salad", 300 });
    menu.insert({ "French Fries", 200 });
    menu.insert({ "Pasta", 500 });  
    menu.insert({ "Chicken", 700 });
    menu.insert({ "Pizza", 500 });
    menu.insert({ "Icecream", 100 });
    menu.insert({ "Water", 150 });
    menu.insert({ "Sparkling Water", 200 });
    menu.insert({ "Wine", 400 });

    int bill = 0;

    while(true){
        string order;
        cout << "What would you like to order?(Type 'Done' when done ordering.)";
        getline(cin, order);

        if(order == "Done" || order == "done"){
            break;
        }

        if(menu.find(order) != menu.end()){
            bill += menu[order];
        }else{
            cout << order << " is not on the MENU.";
        }
    }
    cout << "Your total is: " << bill << "L\n";
}

// Function for user to chose how they want to pay
void payment(){
    string payMethod;
    string pin;

    cout << "How would you like to pay (Cash/Card)? ";
    cin >> payMethod;

    if (payMethod == "Cash" || payMethod == "cash"){
        cout << "Alright! Thank you, have a nice day!\n";
    }
    else if (payMethod == "Card" || payMethod == "card"){
        cout << "Alright! Enter your cards PIN(4 digits): ";
        cin >> pin;

        cout << "Thank you! Have a nice rest of your day!\n";
    }
}

int main(){

    cout << "********MENU*********\n";
    cout << "Salad : 300L\n";
    cout << "French Fries : 200L\n";
    cout << "Pasta : 500L\n";
    cout << "Chicken: 700L\n";
    cout << "Pizza : 500L\n";
    cout << "Icecream : 100L Kupa\n";
    cout << "Water(1l) : 150L\n";
    cout << "Sparkling Water(1l) : 200L\n";
    cout << "Wine(0.5l) : 400L\n";

    totalBill();
    payment();

	return 0;
}