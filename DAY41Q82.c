#include <stdio.h>

int main() {
    // Q82: Print each character of a string on a new line.

char str[50];

printf("Enter the characters of the string : ");
scanf("%s",str);

for(int i =0;str[i]!='\0';i++){
    printf("%c\n",str[i]);

}
    return 0;
}

 
