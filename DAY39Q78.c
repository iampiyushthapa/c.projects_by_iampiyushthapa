
#include <stdio.h>

int main() {
    // Q78: Find the sum of main diagonal elements for a square matrix.

    int row,column;
    int sum = 0;
   
    printf("Enter the number of rows of array: ");
    scanf("%d", &row);

      printf("Enter the number of coloumns of array: ");
    scanf("%d", &column);

    int n[row][column];
  

    printf("Enter elements of array: ");

    for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++){
        scanf("%d", & n[i][j]);
    }
  }
   if (row != column) {
    printf("It is not a square matrix.");
    return 0;
}


   for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++){
      if(i==j){
           sum =  sum + n[i][j];
      }
      }
    }

printf("The sum of main diagonal elements of the square matrix is : %d ",sum);
 return 0;
}