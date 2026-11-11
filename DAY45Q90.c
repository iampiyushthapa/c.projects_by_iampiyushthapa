#include <stdio.h>

int main() {
    // Q90: Toggle case of each character in a string.

char str[50];
 
printf("Enter the characters of the string : ");
scanf("%s",str);

for(int i = 0; str[i] != '\0'; i++) {
    if(str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 32;
    } else if(str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = str[i] + 32;
    }
}

printf("The resultant toggled case string is : %s\n", str);

return 0;
}

 
