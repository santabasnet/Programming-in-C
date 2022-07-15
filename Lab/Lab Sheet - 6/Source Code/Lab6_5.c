/**
 * Subject: Programming in C.
 * Lab Sheet 6 Q. NO. 5: Vector representation and calculation.
 *
 * Solution given by Santa Basnet.
 * Everest Engineering College, Lalitpur.
 * Date: 10/07/2022
 */

#include <stdio.h>
#include <math.h>

#define MAX 10 // denotes the maximum dimensions of a vector
#define MAX_VECTORS 10

/** 3D Vector **/
typedef struct {
    int a, b, c;
} ThreeDVector;

/** Vector Representation **/
typedef struct {
    double coef[MAX];
} Vector;

double magnitude(Vector);

double dotProduct(Vector, Vector);

double costTheta(Vector, Vector);

double theta(Vector, Vector);

/** Demo 3D Vector **/
void demo3DVector(ThreeDVector vector){
    printf("%di + %dj + %dk.\n", vector.a, vector.b, vector.c);
}

/** Main Function **/
int main() {
    /** Initialize 10 vectors. **/
    Vector v[MAX_VECTORS] = {
            {40, 0, 45, 30, 20, 89, 90, 100, 5, 0},
            {20, 100, 6, 89, 999, 9, 900, 89, 50, 21},
            {550, 10, 67, 80, 900, 90, 600, 80, 500, 721},
            {201, 101, 16, 11, 99, 19, 90, 19, 10, 210},
            {120, 110, 61, 891, 91, 911, 191, 189, 150, 121},
            {21, 122, 622, 892, 91, 922, 902, 892, 250, 221},
            {66, 10, 63, 389, 399, 39, 300, 389, 350, 321},
            {26, 106, 66, 896, 969, 96, 900, 869, 560, 261},
            {30, 300, 36, 389, 999, 39, 900, 389, 350, 321},
            {20, 0, 60, 8, 99, 9, 100, 189, 250, 121}
    };
    Vector xAxis = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i=0;i<MAX_VECTORS;i++){
        printf("Angle with x-axis = %.2f.\n", theta(v[i], xAxis));
    }

    return 0;
}

/** Calculates the magnitude of the vector v. **/
double magnitude(Vector v) {
    double sum = 0.0;
    int index;
    for (index = 0; index < MAX; index++) {
        sum += v.coef[index] * v.coef[index];
    }
    return sqrt(sum);
}

/** Calculates the dot product of vectors v and w. **/
double dotProduct(Vector v, Vector w) {
    double sum = 0.0;
    int index;
    for (index = 0; index < MAX; index++) {
        sum += v.coef[index] * w.coef[index];
    }
    return sum;
}

/** Calculate cosine value between two vectors x and y. **/
double cosTheta(Vector x, Vector y) {
    return dotProduct(x, y) / (magnitude(x) * magnitude(y));
}

/** Calculates the angle between two vectors. */
double theta(Vector v, Vector w) {
    return acos(cosTheta(v, w)) * 180.0 / M_PI;
}
