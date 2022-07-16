/**
 * Subject: Programming in C.
 * Lab Sheet 5 Q. NO. 4: Finding the given word is in the sentence or not.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include<stdio.h>
#include<string.h>

#define FOUND 1
#define NOT_FOUND 0

#define MAX_SIZE 255

int main() {
    char inputSentence[MAX_SIZE], word[MAX_SIZE];
    /** Input Section **/
    printf("Enter a sentence: \n");
    fgets(inputSentence, MAX_SIZE, stdin);
    printf("Enter a word to be searched: \n");
    scanf("%s", word);

    /** Find the search word in the sentence. **/
    int maxLen = strlen(inputSentence);
    int wordLen = strlen(word);
    int found = NOT_FOUND;
    for (int i = 0; i < maxLen; i++) {
        found = FOUND;
        for (int j = 0; j < wordLen; j++) {
            if (inputSentence[i + j] != word[j]) {
                found = NOT_FOUND;
                break;
            }
        }
        if(found) break;
    }
    if(found) printf("Result: FOUND\n");
    else printf("Result: NOT FOUND\n");

    return 0;
}

/**
* Output:
Enter a sentence:
I love my country Nepal.
Enter a word to be searched:
country
Result: FOUND
*/