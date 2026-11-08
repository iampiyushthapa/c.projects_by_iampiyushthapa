
#include <stdio.h>

int main() {
    // Q76: Check if a matrix is symmetric.

    int row,column;
    int count = 0;
   
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
    printf("The matrix is not symmetric because it is not square.");
    return 0;
}
   int transpose[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++){
      transpose[i][j] = n[j][i];
    }
  }
   for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++){
      if(transpose[i][j] == n[i][j]){
        count++;
      } 
    }
  }
if(count == row*column){
  printf("The given matrix is symmetric");

}else{
  printf("The given matrix is not symmetric");
}

 return 0;
}