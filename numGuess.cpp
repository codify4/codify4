#include <iostream>

using namespace std;

int main(){

	int num;
	int guess;
	int tries;

	srand(time(NULL));
	num = (rand() % 100) + 1;

	cout << "************NUMBER GUESSING GAME**************\n";

	do{
		cout << "Enter a guess 1-100: ";
		cin >> guess;
		tries++;

		if(guess > num){
			cout << "Too High!\n";
		}else if(guess < num){
			cout << " Too Low!\n";
		}else {
			cout << "Correct! (In: "<< tries << " tries)" << '\n';
		}

	}while(guess != num);

	return 0;
}