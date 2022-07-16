/**
 * Subject: Programming in C.
 * Title: Iterative(Loop) Statements.
 * Lab Sheet - 4 Q. NO. 5: Age categories for people in census.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 15/07/2022
 */

#include <stdio.h>
#define TRUE 1
/** Main Program Starts here **/
int main() {
    int baby = 0, teenager = 0, youth = 0, mature = 0, old = 0;
    int age;
    do {
        printf("Enter age: ");
        scanf("%d", &age);
        getchar();
        /** Perform Categorization **/
        if(age <= 12) baby ++;
        else if(age <= 19) teenager ++;
        else if(age <= 39) youth ++;
        else if(age <= 60) mature ++;
        else old ++;

        printf("Do you want more ? (Y|N): ");
        char ch = (char) getchar();
        getchar();
        int more = (ch == 'Y' || ch == 'y');
        if (!more) break;
    }while (TRUE);
    /** Display Output **/
    printf("\nResult>> \n\t1.Baby:\t%d\n\t2.Teenager:\t%d\n\t3.Youth:\t%d\n\t4.Mature:\t%d\n\t5.Old:\t\t%d\n", baby,
           teenager, youth, mature, old);
    return 0;
}

/**
* Output:
Enter age: 60
Do you want more ? (Y|N): y
Enter age: 2
Do you want more ? (Y|N): y
Enter age: 40
Do you want more ? (Y|N): y
Enter age: 22
Do you want more ? (Y|N): y
Enter age: 90
Do you want more ? (Y|N): y
Enter age: 80
Do you want more ? (Y|N): y
Enter age: 34
Do you want more ? (Y|N): n

Result>>
	1.Baby:	1
	2.Teenager:	0
	3.Youth:	2
	4.Mature:	2
	5.Old:		2
*/