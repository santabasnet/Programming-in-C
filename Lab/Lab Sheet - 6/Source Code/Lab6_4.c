/**
 * Subject: Programming in C.
 * Lab Sheet 6 Q. NO. 4: Market day scheduler for husband and wife.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 10/07/2022
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/** Type name of Coin Toss Result **/
typedef enum {
    HEAD, TAIL
} CoinToss;

/** Toss a biased coin: HEAD for 70 % of time and TAIL for 30% of time. **/
CoinToss toss() {
    return rand() % 10 < 7 ? HEAD : TAIL;
}

/** Returns the enum text name. **/
const char *tossName(CoinToss t) {
    switch (t) {
        case HEAD: return "HEAD";
        case TAIL: return "TAIL";
    }
}

/** Main Function **/
int main() {
    char day[100];
    printf("\nToss for >> ");
    scanf("%s", day);
    srand(time(0));
    if (toss() == TAIL) printf("Output: %s [Today is %s, husband's turn.]", tossName(TAIL), day);
    else printf("Output: %s [Today is %s, wife's turn.]", tossName(TAIL), day);
    return 0;
}

/**
* Output:
Toss for >> Sunday
Output: TAIL [Today is Sunday, wife's turn.]
*/