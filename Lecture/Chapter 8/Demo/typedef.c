
/**
 * typedef example.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 10/07/2022
 */
#include<string.h>
typedef struct{
    char name[100];
    int age;
}Human;

typedef int Man;

int main() {
    Man a = 0, b= 100;

    Human ashik;
    strcpy(ashik.name, "Ashik Poudel");
    ashik.age = 45;

    return 0;
}