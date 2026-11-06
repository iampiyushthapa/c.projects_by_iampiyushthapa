
#include <stdio.h>

int main() {
    // Q74: Find the transpose of a matrix.

    int row,column;
   
    printf("Enter the number of rows of array: ");
    scanf("%d", &row);

      printf("Enter the number of coloumns of array: ");
    scanf("%d", &column);

    int n[row][column];
    int transpose[column][row];

    printf("Enter elements of array: ");

    for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++){
        scanf("%d", & n[i][j]);
    }
  }

 for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++){
      transpose[j][i]= n[i][j];
    }
  }
printf("The transpose of the matrix is : \n" );

  for (int i = 0; i < column; i++) {
    for (int j = 0; j < row; j++){
        printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

 return 0;
}