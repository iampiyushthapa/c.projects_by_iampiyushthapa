
#include <stdio.h>

int main() {
    // Q77: Check if the elements on the diagonal of a matrix are distinct.

    int row,column;
    int check = 0;
   
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
    printf("Diagonal are not defined for non square matrix.");
    return 0;
}


   for (int i = 0; i < row; i++) {
    for (int j = i+1; j < row; j++){
      if(n[i][i]==n[j][j]){
        check ++;
      }  
      }
    }
  
if(check == 1){
  printf("The elements of diagonal of matrix are not distinct");

}else{
  printf("The elements of diagonal of matrix is distinct");
}

 return 0;
}