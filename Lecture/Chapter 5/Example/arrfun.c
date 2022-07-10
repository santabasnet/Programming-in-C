#include <stdio.h>

void print(int x, int y, int arr[x][y]){
    int i, j;
    for(i=0; i<x; ++i){
        for(j=0; j<y; ++j){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[4][3] = {{1,2,3},{1,2,3}, {1,2,3},{1,2,3}};
    print(4, 3, a);
    return 0;
}
