
#include <stdio.h>

int main() {
    // Q73: Find the sum of each row of a matrix and store it in an array.

    int row,column;
    int sum[100];
    
    printf("Enter the  number of rows of array: ");
    scanf("%d", &row);

      printf("Enter the number of coloumns of array: ");
    scanf("%d", &column);

    int n[row][column];

    printf("Enter elements of array: ");

    for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++){
        scanf("%d", &n[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
      sum[i] = 0; 

  for (int j = 0; j < column; j++) { 
  sum[i]= sum[i] + n[i][j];
 
  }
}
printf("The sum of each row of the matrix in the form of array is : \n" );

for (int i = 0; i < row; i++) {
      printf("%d ",sum[i]);
} 

 return 0;
}