#include <stdio.h>

int main() {
    // Q89: Count frequency of a given character in a string.

char str[50];
int frequency=0;
char character;

printf("Enter the string : ");
scanf("%s",str);
printf("Enter the character to calculate frequency :");
scanf(" %c",&character);

for(int i = 0;str[i]!='\0';i++){
    if(str[i]==character){
     frequency ++;
    }
}  printf("The frequency of the given character is : %d", frequency);

 return 0;
}
 
