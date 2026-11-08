
#include <stdio.h>

int main() {
    // Q75: Add two matrices.

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

printf("The addition of the two matrix is : \n" );
   int n3[row1][column1];

  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < column1; j++){
      n3[i][j] = n1[i][j] + n2[i][j];
        printf("%d ", n3[i][j]);
    }
    printf("\n");
  }

 return 0;
}