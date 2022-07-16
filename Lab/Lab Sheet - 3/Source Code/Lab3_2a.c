/**
 * Subject: Programming in C.
 * Title: Decision Statements.
 * Lab Sheet - 3 Q. NO. 2a: Robo R2D2 Movement with Key Input.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

#define FORWARD     'w'
#define BACKWARD    's'
#define LEFT        'a'
#define RIGHT       'd'
#define FIRE        'l'

int main() {
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
    return 0;
}

/**
 * Output:
 * Give your input character: a
 * MOVE LEFT
*/