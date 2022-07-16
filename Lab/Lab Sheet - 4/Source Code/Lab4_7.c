/**
 * Subject: Programming in C.
 * Title: Iterative(Loop) Statements.
 * Lab Sheet - 4 Q. NO. 7: Frequency count of number appeared in an array.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include<stdio.h>

#define SIZE    10
#define TRUE    1
#define FALSE   0

/** Main Program Starts Here **/
int main() {
    int numbers[SIZE] = {5, 6, 3, 5, 6, 8, 5, 3, 2, 2};
    int unique[SIZE], frequency[SIZE], uCount = 0;
    for (int i = 0; i < SIZE; i++) {
        int found = FALSE, j;
        for (j = 0; j < uCount; j++) {
            if (numbers[i] == unique[j]) {
                found = TRUE;
                break;
            }
        }
        if (found) frequency[j]++;
        else {
            unique[j] = numbers[i];
            frequency[j] = 1;
            uCount++;
        }
    }
    /** Display Result **/
    printf("Unique Number Items: ");
    for (int i = 0; i < uCount; i++) {
        printf("\t%d", unique[i]);
    }
    /** Display Frequency Table */
    printf("\nFrequency Table: \n");
    for (int i = 0; i < uCount; i++) {
        printf("\t%d -> %d\n", unique[i], frequency[i]);
    }
    return 0;
}

/**
* Output:
Unique Number Items: 	5	6	3	8	2
Frequency Table:
	5 -> 3
	6 -> 2
	3 -> 2
	8 -> 1
	2 -> 2
*/