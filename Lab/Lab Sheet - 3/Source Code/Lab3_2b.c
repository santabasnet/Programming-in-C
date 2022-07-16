/**
 * Subject: Programming in C.
 * Title: Decision Statements.
 * Lab Sheet - 3 Q. NO. 2b: Robo R2D2 Movement with Key Input and password security.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */
#include <stdio.h>
#include <stdlib.h>

#define FORWARD     'w'
#define BACKWARD    's'
#define LEFT        'a'
#define RIGHT       'd'
#define FIRE        'l'

#define PASSWORD 737

int main() {
    int password;
    printf("Input your password: ");
    scanf("%d", &password);
    if (password != PASSWORD) {
        printf("Invalid password ! you are not authorised.\n");
        return EXIT_SUCCESS;
    }
    getchar();

    char input;
    printf("Give your input character: ");
    scanf("%c", &input);
    switch (input) {
        case FORWARD:
            printf("MOVE FORWARD\n");
            break;
        case BACKWARD:
            printf("MOVE BACKWARD\n");
            break;
        case LEFT:
            printf("MOVE LEFT\n");
            break;
        case RIGHT:
            printf("MOVE RIGHT\n");
            break;
        case FIRE:
            printf("FIRE NOW\n");
            break;
        default:
            printf("Invalid Input ! Better luck next time.\n");
            break;
    }
    return EXIT_SUCCESS;
}

/**
 * Output:
 *
 * Input your password: 737
 * Give your input character: a
 * MOVE LEFT
 *
 * Input your password: 666
 * Invalid password ! you are not authorised.
*/