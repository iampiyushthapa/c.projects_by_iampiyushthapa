#include <stdio.h>

int main() {
    // Q88: Replace spaces with hyphens in a string.

char str[50];

printf("Enter the string : ");
fgets(str,sizeof(str),stdin);

for(int i = 0;str[i]!='\0'&&str[i]!='\n';i++){
    
     if(str[i]==' '){
          str[i] = '-';
     }    
}

printf("The string after replacing spaces with hyphen is : %s", str);

 return 0;
}
 
