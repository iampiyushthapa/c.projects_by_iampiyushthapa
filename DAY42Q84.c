#include <stdio.h>

int main() {
    // Q84: Convert a lowercase string to uppercase without using built-in functions.

char str[50];
 
printf("Enter the characters of the string : ");
scanf("%s",str);

for(int i =0;str[i]!='\0';i++){
 if(str[i]>='a'&&str[i]<='z'){
str[i]=str[i] - 32;
 } 
}

printf("The resultant uppercase string is : %s \n",str);

return 0;
}

 
