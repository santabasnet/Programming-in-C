#include <stdio.h>

void value(int *a){
	*a = 200;
}

void func(int *arr, int m, int n)         
{
    for (int i=0; i<m; i++){
       for (int j=0; j<n; j++){
          printf("%d ", *((arr+i*n) + j));    
       }
       printf("\n");
    }
}

int main(){     	
   	int x = 100;
   	value(&x);
   	//printf("%d\n", x);
   	int rows = 3, cols = 3;
   	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};   
    func((int *)arr, rows, cols);         
   	
    return(0);
}
