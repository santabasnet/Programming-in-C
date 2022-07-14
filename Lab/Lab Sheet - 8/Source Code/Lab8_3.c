/**
 * Subject: Programming in C.
 * Lab Sheet - 8 Q. NO. 3: Reading and Writing Telephone data of Students.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 14/07/2022
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10

/** Student type. **/
typedef struct {
    char name[50];
    char telephone[11];
    int grade;
} Student;

/** Initialization 5 students in global scope.*/
Student students[SIZE] = {
        {"Ram Karki",               "9849000125", 3},
        {"Shyam Kumar Kaami",       "9849000144", 10},
        {"Kishan Kushwaha",         "9803055543", 2},
        {"Kumar Shimkhada",         "9849010234", 8},
        {"Sundar Bahadur Kathayat", "9849020789", 7}
};

/** Write student data in a new file and close it. **/
void writeStudents(const char *fileName) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) return;
    for (int index = 0; index < SIZE; index++) {
        fwrite(&students[index], sizeof(Student), 1, file);
    }
    fclose(file);
}

/** Append student data in a file and close it. **/
void appendStudent(const char *fileName, Student student) {
    FILE *file = fopen(fileName, "a");
    if (file == NULL) return;
    fwrite(&student, sizeof(Student), 1, file);
    fclose(file);
}

/** Read students data from the file. **/
Student *readStudents(const char *fileName) {
    Student *students = (Student *) malloc(SIZE * sizeof(Student));
    FILE *file = fopen(fileName, "r");
    if (file != NULL) {
        for (int index = 0; index < SIZE || !feof(file); index++) {
            fread(&students[index], sizeof(Student), 1, file);
        }
        fclose(file);
    }
    return students;
}

/** Find student by given phone */
Student *searchByPhone(Student *students, char *phone) {
    Student *student = NULL;
    for (int index = 0; index < SIZE; index++) {
        if (strcmp(phone, (students + index)->telephone) == 0) {
            student = (students + index);
            break;
        }
    }
    return student;
}

/** Display all the students from the file **/
void displayStudent(Student *student) {
    printf("\nName: %s", (student->name));
    printf("\nTelephone: %s", students->telephone);
    printf("\nGrade: %2d", (student->grade));
}

/** Display all the students from the file **/
void display(Student *students) {
    printf("\n----------------------------------------");
    for (int index = 0; index < SIZE; index++) {
        displayStudent(students + index);
        printf("\n----------------------------------------");
    }
    printf("\n");
}

/** Input phone number and search it. **/
void searchPhone() {
    char phone[11];
    printf("\nGive Phone Number: ");
    scanf("%s", &phone);
    Student *fStudent = searchByPhone(students, phone);
    if (fStudent == NULL) fprintf(stdout, "\nStudent Not Found.\n");
    else displayStudent(fStudent);
}

/** Perform append operation of the phone number **/
void readAndAppendData(const char *fileName) {
    Student student;
    printf("\nGive Student's name: ");
    scanf("%s", student.name);
    printf("Give Student's telephone: ");
    scanf("%s", student.telephone);
    printf("Give Student's grade: ");
    scanf("%d", &student.grade);
    appendStudent(fileName, student);
}

int main() {
    const char *file = "students.dat";
    /** a. Perform write operations first. **/
    writeStudents(file);

    /** b. Perform read operation from the file. **/
    Student *students = readStudents(file);
    display(students);

    /** c. Take input of phone number from console and find it.**/
    searchPhone();

    /** d. Perform Append Operation **/
    readAndAppendData(file);

    return 0;
}
