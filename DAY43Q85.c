#include <stdio.h>
#include<string.h>

int main() {
    // Q85: Reverse a string.

char str[50];
 
printf("Enter the characters of the string : ");
scanf("%s",str);

strrev(str);
printf("The reversed string is : %s ",str);

return 0;
}

 
