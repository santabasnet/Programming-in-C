/** Find Row Sum of a 3 by 4 Matrix */
#include<stdio.h>
#define ROW 3
#define COLUMN 4
int main(){
	int m[ROW][COLUMN] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	int sum = 0;
	for(int i = 0; i<ROW; i++){
		
		for(int j=0;j<COLUMN; j++){
			sum += m[i][j];
		}
		
	}
	printf("Sum is : %d.\n", sum);
	return 0;
}
