/**
 * Subject: Programming in C.
 * Lab Sheet 6 Q. NO. 2: Air fare of Nepal Hawaijahaj Company.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 10/07/2022
 */

#include <stdio.h>
#include <string.h>

#define ROUTES 10

/** Enumeration type for the city names. **/
enum City {
    KATHMANDU, BIRATNAGAR, SIMARA, LUKLA, POKHARA, JOMSOM
};

/** Boolean Type **/
typedef enum {
    FALSE, TRUE
} Boolean;

/** Returns the city name that maps to the enum constant. **/
const char *cityNameOf(enum City city) {
    switch (city) {
        case KATHMANDU:
            return "KATHMANDU";
        case BIRATNAGAR:
            return "BIRATNAGAR";
        case SIMARA:
            return "SIMARA";
        case LUKLA:
            return "LUKLA";
        case POKHARA:
            return "POKHARA";
        case JOMSOM:
            return "JOMSOM";
        default:
            return "";
    }
}

/** Returns the city constant that maps to the string value. **/
enum City cityConstantOf(char *city) {
    if (strcmp("KATHMANDU", city) == 0) return KATHMANDU;
    if (strcmp("BIRATNAGAR", city) == 0) return BIRATNAGAR;
    if (strcmp("SIMARA", city) == 0) return SIMARA;
    if (strcmp("LUKLA", city) == 0) return LUKLA;
    if (strcmp("POKHARA", city) == 0) return POKHARA;
    if (strcmp("JOMSOM", city) == 0) return JOMSOM;
    return -1;
}

/** Type definition of AirFare. **/
typedef struct {
    enum City from;
    enum City to;
    int fare;
} AirFare;

/** Initialize air fare of the cities. **/
AirFare airFares[ROUTES] = {
        {KATHMANDU,  BIRATNAGAR, 5000},
        {BIRATNAGAR, KATHMANDU,  4000},
        {KATHMANDU,  LUKLA,      3500},
        {LUKLA,      KATHMANDU,  4000},
        {KATHMANDU,  POKHARA,    2000},
        {POKHARA,    KATHMANDU,  1500},
        {KATHMANDU,  SIMARA,     1500},
        {SIMARA,     KATHMANDU,  3500},
        {POKHARA,    JOMSOM,     5500},
        {JOMSOM,     POKHARA,    3500}
};

/** Display air fare between cities. **/
void displayAirFares() {
    printf("Initialized air fares: \n");
    for (int i = 0; i < ROUTES; i++) {
        printf("\tAir fare from %s to %s is %d.\n", cityNameOf(airFares[i].from), cityNameOf(airFares[i].to),
               airFares[i].fare);
    }
}

/** Display associated for two cities taken input from console.**/
void displayAssociatedFares() {
    char fromCity[100], toCity[100];
    printf("Give begin city: ");
    scanf("%s", fromCity);
    printf("Give end city: ");
    scanf("%s", toCity);

    enum City from = cityConstantOf(fromCity);
    enum City to = cityConstantOf(toCity);
    Boolean found = FALSE;
    int i;
    for (i = 0; i < ROUTES; i++) {
        if(from == airFares[i].from && to == airFares[i].to){
            found = TRUE;
            break;
        }
    }

    if(found) printf("Fare found and the fare between %s and %s is %d.\n", cityNameOf(from), cityNameOf(to), airFares[i].fare);
    else printf("Flight not available.\n");
}

/** Main Function, exits 0 with successful output. **/
int main() {
    /** 2a. Display initialized data. **/
    displayAirFares();
    /** 2b. Display associated fare for cities. **/
    displayAssociatedFares();
    return 0;
}

/**
* Output:
Initialized air fares:
	Air fare from KATHMANDU to BIRATNAGAR is 5000.
	Air fare from BIRATNAGAR to KATHMANDU is 4000.
	Air fare from KATHMANDU to LUKLA is 3500.
	Air fare from LUKLA to KATHMANDU is 4000.
	Air fare from KATHMANDU to POKHARA is 2000.
	Air fare from POKHARA to KATHMANDU is 1500.
	Air fare from KATHMANDU to SIMARA is 1500.
	Air fare from SIMARA to KATHMANDU is 3500.
	Air fare from POKHARA to JOMSOM is 5500.
	Air fare from JOMSOM to POKHARA is 3500.
Give begin city: POKHARA
Give end city: JOMSOM
Fare found and the fare between POKHARA and JOMSOM is 5500.
*/