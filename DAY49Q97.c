#include <stdio.h>
#include <string.h>

int main() {
    // Q97: Print the initials of a name.

    char str[50];
  
     printf("Enter the sentence : ");
    fgets(str,sizeof(str),stdin);
     int length = strlen(str);

    printf(" The initials of the name are : " );

     for(int i = 0;i<length;i++){
      if ((i==0 || str[i -1]==' ' )&& str[i]!='\n' && str[i]!=' ' ){
        printf("%c.",str[i]);}
        
      }
    return 0;
}



 
