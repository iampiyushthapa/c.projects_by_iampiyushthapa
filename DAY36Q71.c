
#include <stdio.h>

int main() {
    // Q71: Read and print a matrix.

   int row,column;
  
    printf("Enter the  number of rows of array: ");
    scanf("%d", &row);

      printf("Enter the number of coloumns of array: ");
    scanf("%d", &column);

    int n[row][column];
    
    printf("Enter elements of array: ");

    for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) 
        scanf("%d", &n[i][j]);
    }
    
  printf("The array is : \n" );

  for (int i = 0; i < row; i++) {
   for (int j = 0; j < column; j++) { 
  printf("%d ", n[i][j]);
}
printf("\n");
}
 return 0;
}