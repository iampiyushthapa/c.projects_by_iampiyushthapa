
#include <stdio.h>

int main() {
    // Q72: Find the sum of all elements in a matrix.

    int row,column;
    int sum = 0;
  
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
   for (int j = 0; j < column; j++) { 
  sum = sum + n[i][j];
} 
  }
printf("The sum of total elements of array is : %d",sum );
 return 0;
}