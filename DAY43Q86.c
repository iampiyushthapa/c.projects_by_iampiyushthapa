#include <stdio.h>
#include <string.h>

int main() {
    // Q86: Check if a string is a palindrome.

char str[50];
char rev[50];

printf("Enter the characters of the string : ");
scanf("%s",str);

strcpy(rev,str);
strrev(rev);

  if(strcmp(str,rev)==0){
    printf("The string is a pallidrome");

  }else{
    printf("The string is not a pallidrome");
}

 return 0;
}
 
