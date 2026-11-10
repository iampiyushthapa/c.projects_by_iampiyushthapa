
#include <stdio.h>

int main() {
    // Q79: Perform diagonal traversal of a matrix.

    int row,column;

    printf("Enter the number of rows of array: ");
    scanf("%d", &row);

      printf("Enter the number of coloumns of array: ");
    scanf("%d", &column);

    int a[row][column];
  

    printf("Enter elements of array: ");

    for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++){
        scanf("%d", & a[i][j]);
    }
  }
   if (row != column) {
    printf("Diagonal Transversal of the matrix is not possible ");
    return 0;
}

  printf("The diagonal transversal of the matrix is : ");

    for (int d = 0; d < row + column - 1; d++) {

    if (d % 2 == 0) {
    for (int i = row - 1; i >= 0; i--) {
    int j = d - i;

    if (j >= 0 && j < column) {
    printf("%d ", a[i][j]);
     }
       }
    } else {
     for (int i = 0; i < row; i++) {
      int j = d - i;

    if (j >= 0 && j < column) {
     printf("%d ", a[i][j]);
     }
       }
     }
    }

    return 0;
}

 
