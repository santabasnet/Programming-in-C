/**
* Program that reads name of a person and
 * greets him with welcome message.
*
* By: Santa Basnet
* Everest Engineering College.
* Date: 2022-07-10
*/
#include<stdio.h>

int main() {
    char name[100];
    printf("Input Name: ");
    scanf("%s", name);
    printf("\nHello %s! Welcome to the world of programming.", name);
    return 0;
}