/**
 * Subject: Programming in C.
 * Title: Decision Statements.
 * Lab Sheet - 3 Q. NO. 3: Finding days of the year from a date.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

int MONTHS[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int year, month, day, dayOfYear = 0;

    /** Input **/
    printf("Enter yyyy-mm-dd : ");
    scanf("%4d-%2d-%2d", &year, &month, &day);

    /** Calculation of Leap Year. **/
    int isLeap = (year % 4 == 0) || ((year % 100 != 0 && year % 400 == 0));
    if (isLeap) MONTHS[1] = 29;

    /** Calculation of Day of the Year. **/
    for (int i = 0; i < (month - 1); i++) dayOfYear += MONTHS[i];
    dayOfYear += day;
    printf("Days of the year: %d", dayOfYear);

    return 0;
}

/**
 * Output:
 * Enter yyyy-mm-dd : 2000-12-31
 * Days of the year: 366
*/