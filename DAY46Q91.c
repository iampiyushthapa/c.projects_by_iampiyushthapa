#include <stdio.h>

int main() {
    // Q91: Remove all vowels from a string.

char str[50];
int j = 0;
 
printf("Enter the characters of the string : ");
scanf("%s",str);

for(int i = 0; str[i] != '\0'; i++) {
    if(str[i] != 'a'&& str[i] != 'e'&& str[i] != 'i'&& str[i] != 'o'&& str[i] != 'u'&&
        str[i] != 'A'&& str[i] != 'E'&& str[i] != 'I'&& str[i] != 'O'&& str[i] != 'U') {
            str[j]=str[i];
        j++;
        }
    }
    str[j]='\0';
    printf("The resultant string after removing all vowels is : %s\n", str);
    
  return 0;
}

 
