#include <stdio.h>

int main(){
    
    printf("Hello,welcome to the Adventure Game!\n");
    printf("Let's start!\n");
    
    int answer;
    int option;
    
    printf("You are lost in the jungle.\n You have two routes.\n 1 and 2. Pick one of them: ");
    scanf("%d", &answer);
    
    if(answer == 1){
        printf("Good job picked the right one.\n");
    } else if(answer == 2){
        printf("You picked the wrong route.\nYOU LOST!");
    } else {
        printf("That isn't a valid option!");
    }
    
    printf("Now you are in front of a river.\n There's a small bridge, but it's not safe, there's also a boat next to you.\n Pick between 1 and 2 : ");
    scanf("%d", &option);
    
    if(option == 1){
        printf("The bridge breaks and you fall into the river.\n You Lose!");
    } else if(option == 2){
        printf("You use the boat to go across the river and on to the next level.\n");
    } else {
        printf("That isn't a valid option!");
    }

    return 0;
}
