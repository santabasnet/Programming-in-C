/**
 * Subject: Programming in C.
 * Lab Sheet 5 Q. NO. 3: Counting characters and Reverse of a string.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include<stdio.h>
#include<ctype.h>

#define MAX_SIZE 100

int main() {
    /** Input String **/
    char input[100];
    printf("Input Text: \n");
    fgets(input, MAX_SIZE, stdin);

    int totalChars = 0, vowelChars = 0;
    while (input[totalChars] != '\0') {
        char ch = toupper(input[totalChars]);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') vowelChars++;
        totalChars++;
    }
    printf("Result: \n");
    printf("\tTotal Characters: %d\n", totalChars);
    printf("\tTotal Vowel Characters: %d\n", vowelChars);

    printf("Reverse String: ");
    for (int i = totalChars - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }

    return 0;
}

/**
 * Output:
Input Text:
Nepal is a beautiful country.
Result:
	Total Characters: 31
	Total Vowel Characters: 12
Reverse String:
.yrtnuoc lufituaeb a si lapeN
 */