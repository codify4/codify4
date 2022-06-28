#include<stdio.h>

int main(){

    char name[30];
    int age;
    char job[100];

    printf("Enter your name: ");
    scanf("%d", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your job: ");
    scanf("%s", job);
    printf("Your name is: %s", name);
    printf("Your age is: %d\n", age);
    printf("Your job is: %s ", job);

    return 0;
}