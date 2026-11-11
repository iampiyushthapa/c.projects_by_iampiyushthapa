#include <stdio.h>

int main() {
    // Q92: Find the first repeating lowercase alphabet in a string.

char str[50];
int found = 0;
 
printf("Enter the characters of the string : ");
scanf("%s",str);

for(int i = 0; str[i] != '\0'; i++) {
    for(int j = i+1;str[j] != '\0';j++){
        if(str[i]==str[j] && 
        str[i]>='a'&& str[i]<='z'){
  printf("The first repeating lowercase alphabet in a string is : %c", str[i]);
  found++;
   break;
        }
    }
    if(found==1) {
          break;   
        }
    }
    if(found==0){
        printf("No repeating lowercase alphabet found ");
    }
  return 0;
}

 
