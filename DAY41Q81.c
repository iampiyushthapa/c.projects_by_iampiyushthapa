#include <stdio.h>

int main() {
    // Q81: Count characters in a string without using built-in length functions.

char str[50];

printf("Enter the characters of the string : ");
scanf("%s",str);

int count = 0;
for(int i =0;str[i]!='\0';i++){
    count++;
}
   printf("The numbers of characters in the string is : %d ",count);

    return 0;
}

 
