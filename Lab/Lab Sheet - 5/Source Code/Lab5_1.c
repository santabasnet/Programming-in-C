/**
 * Subject: Programming in C.
 * Lab Sheet 5 Q. NO. 1: Airlines fare representation using Arrays and Strings.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>

#define MAX_ROUTES 10

/** CITY NAMES **/
#define KATHMANDU   0
#define BIRATNAGAR  1
#define SIMARA      2
#define LUKLA       3
#define POKHARA     4
#define JOMSOM      5

/** ROUTES **/
#define KATHMANDU_BIRATNAGAR    0
#define BIRATNAGAR_KATHMANDU    1
#define KATHMANDU_LUKLA         2
#define LUKLA_KATHMANDU         3
#define KATHMANDU_POKHARA       4
#define POKHARA_KATHMANDU       5
#define KATHMANDU_SIMARA        6
#define SIMARA_KATHMANDU        7
#define POKHARA_JOMSOM          8
#define JOMSOM_POKHARA          9

/** ROUTES NAME **/
const char *routes[100] = {
        "KATHMANDU to BIRATNAGAR",
        "BIRATNAGAR to KATHMANDU",
        "KATHMANDU to LUKLA",
        "LUKLA to KATHMANDU",
        "KATHMANDU to POKHARA",
        "POKHARA to KATHMANDU",
        "KATHMANDU to SIMARA",
        "SIMARA to KATHMANDU",
        "POKHARA to JOMSOM",
        "JOMSOM to POKHARA"
};

/** Airfare representation and initialization. **/
const float airFares[MAX_ROUTES] = {
        5000.0f, 4000.0f, 3500.0f, 4000.0f, 2000.0f, 1500.0f, 1500.0f, 3500.0f, 5500.0f, 3500.0f
};

/** Main function, returns 0 for successful execution. **/
int main() {
    /** 1a. Display initialized fares. **/
    printf("Air fares of Nepal Hawaijahaj Company:\n");
    for (int i = 0; i < MAX_ROUTES; i++) {
        printf("\t%25s : %.2f\n", routes[i], airFares[i]);
    }

    /** 1b. Display increased prices. **/
    float percentage, increasedPrices[MAX_ROUTES];
    printf("Increased Percentage: ");
    scanf("%f", &percentage);
    for (int i = 0; i < MAX_ROUTES; i++) {
        increasedPrices[i] = ((percentage / 100.0f) * airFares[i]) + airFares[i];
    }

    printf("Increased price of air fares of Nepal Hawaijahaj Company:\n");
    for (int i = 0; i < MAX_ROUTES; i++) {
        printf("\t%25s : %.2f\n", routes[i], increasedPrices[i]);
    }

    return 0;
}

/**
 * Output :
Air fares of Nepal Hawaijahaj Company:
	  KATHMANDU to BIRATNAGAR : 5000.00
	  BIRATNAGAR to KATHMANDU : 4000.00
	       KATHMANDU to LUKLA : 3500.00
	       LUKLA to KATHMANDU : 4000.00
	     KATHMANDU to POKHARA : 2000.00
	     POKHARA to KATHMANDU : 1500.00
	      KATHMANDU to SIMARA : 1500.00
	      SIMARA to KATHMANDU : 3500.00
	        POKHARA to JOMSOM : 5500.00
	        JOMSOM to POKHARA : 3500.00
Increased Percentage: 30
Increased price of air fares of Nepal Hawaijahaj Company:
	  KATHMANDU to BIRATNAGAR : 6500.00
	  BIRATNAGAR to KATHMANDU : 5200.00
	       KATHMANDU to LUKLA : 4550.00
	       LUKLA to KATHMANDU : 5200.00
	     KATHMANDU to POKHARA : 2600.00
	     POKHARA to KATHMANDU : 1950.00
	      KATHMANDU to SIMARA : 1950.00
	      SIMARA to KATHMANDU : 4550.00
	        POKHARA to JOMSOM : 7150.00
	        JOMSOM to POKHARA : 4550.00
 */