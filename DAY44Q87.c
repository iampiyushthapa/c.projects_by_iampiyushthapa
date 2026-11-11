#include <stdio.h>

int main() {
    // Q87: Count spaces, digits, and special characters in a string.

char str[50];
int spaces =0;
int digits = 0;
int special_characters = 0;

printf("Enter the string : ");
fgets(str,sizeof(str),stdin);

for(int i = 0;str[i]!='\0'&&str[i]!='\n';i++){
    if(str[i]>='0'&& str[i]<='9'){
        digits++;
    }
    else if(str[i]==' '){
        spaces++;
    
    } else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
              
    }else{
          special_characters++;
    }
    
}
printf("The number of digits in the string is : %d\n ",digits);
printf("The number of spaces in the string is : %d \n",spaces);
printf("The number of special_characters in the string is : %d ",special_characters);

 return 0;
}
 
