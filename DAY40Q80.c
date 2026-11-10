
#include <stdio.h>

int main() {
    // Q80: Multiply two matrices.

    int row1,column1;
   
    printf("Enter the number of rows of first array: ");
    scanf("%d", &row1);

      printf("Enter the number of coloumns of first array: ");
    scanf("%d", &column1);

    int n1[row1][column1];
  

    printf("Enter elements of  first array: ");

    for (int i = 0; i < row1; i++) {
    for (int j = 0; j < column1; j++){
        scanf("%d", & n1[i][j]);
    }
  }
  
    int row2,column2;

    printf("Enter the number of rows of second array: ");
    scanf("%d", &row2);

      printf("Enter the number of coloumns of second array: ");
    scanf("%d", &column2);

    int n2[row2][column2];
  

    printf("Enter elements of second array: ");

    for (int i = 0; i < row2; i++) {
    for (int j = 0; j < column2; j++){
        scanf("%d", & n2[i][j]);
    }
  }

   if (column1!=row2){
    printf("Matrix multiplication is not possible");
    return 0;
   }

  printf("The multiplication of the two matrix is : \n");

   int multiplication[row1][column2];
   for(int i = 0;i<row1;i++){
    for (int j = 0;j<column2;j++){
      multiplication[i][j]=0;
      for(int k = 0;k<column1;k++){

        multiplication[i][j] = multiplication[i][j] + n1[i][k] * n2[k][j];
      }
    }
   }
 for (int i = 0; i < row1; i++) {
    for (int j = 0; j < column2; j++){
        printf("%d ", multiplication[i][j]);
    }
    printf("\n");
  }
   
    return 0;
}

 
