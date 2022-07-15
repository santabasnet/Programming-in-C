/**
 * Subject: Programming in C.
 * Lab Sheet 6 Q. NO. 3: Union representation of multiple addresses.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 10/07/2022
 */

#include<string.h>
#include<stdio.h>

#define SIZE 5

enum AddressType {
    POSTAL, TEXT
};

struct PostalAddress {
    char city[50];
    int postalCode;
};

struct TextAddress {
    char municipality[50];
    int ward;
    char district[50];
    char country[50];
};

/** 3a. Representation of PersonAddress. **/
struct Address {
    enum AddressType addressType;
    union PersonalAddress {
        struct PostalAddress postalAddress;
        struct TextAddress textAddress;
    } address;
};

/** 3b. Five addresses and initialization of dummy data. **/
struct Address pAddress[SIZE] = {
        {.addressType = POSTAL, .address.postalAddress.city = "Kathmandu", .address.postalAddress.postalCode = 100},
        {.addressType = TEXT, .address.textAddress.country = "Nepal", .address.textAddress.district = "Kathmandu", .address.textAddress.municipality="Kathmandu", .address.textAddress.ward = 11},
        {.addressType = POSTAL, .address.postalAddress.city = "Lalitpur", .address.postalAddress.postalCode = 150},
        {.addressType = TEXT, .address.textAddress.country = "Nepal", .address.textAddress.district = "Morang", .address.textAddress.municipality="Biratnagar", .address.textAddress.ward = 2},
        {.addressType = POSTAL, .address.postalAddress.city = "Bhaktapur", .address.postalAddress.postalCode = 310},
};

/** Display Address **/
void displayAddress(struct Address a) {
    switch (a.addressType) {
        case TEXT:
            printf("{%s - %d, %s, %s.}\n", a.address.textAddress.municipality, a.address.textAddress.ward,
                   a.address.textAddress.district, a.address.textAddress.country);
            break;
        case POSTAL:
            printf("{POBox: %d, %s.}\n", a.address.postalAddress.postalCode, a.address.postalAddress.city);
            break;
    }
}

/** 3c. Display all the address that belongs to the given district. **/
void displayAddressOfDistrict() {
    char district[100];
    printf("Give district name: ");
    scanf("%s", district);
    for (int i = 0; i < SIZE; i++) {
        switch (pAddress[i].addressType) {
            case TEXT:
                if (strcmp(district, pAddress[i].address.textAddress.district) == 0) displayAddress(pAddress[i]);
                break;
            case POSTAL:
                if (strcmp(district, pAddress[i].address.postalAddress.city) == 0) displayAddress(pAddress[i]);
                break;
        }
    }
}

/** Main function starts here. **/
int main() {
    displayAddressOfDistrict();
    return 0;
}

/**
* Output:
Give district name: Kathmandu
{POBox: 100, Kathmandu.}
{Kathmandu - 11, Kathmandu, Nepal.}
*/