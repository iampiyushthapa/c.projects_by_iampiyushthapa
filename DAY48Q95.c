#include <stdio.h>
#include <string.h>

int main() {
    // Q95: Check if one string is a rotation of another.

    char str1[50];
    char str2[50];
    char combined[100];
    
     printf("Enter the first string : ");
    scanf("%s",str1);

     printf("Enter the second string : ");
    scanf("%s",str2);

    if(strlen(str1) == strlen(str2)){
        strcpy(combined, str1);
        strcat(combined, str1);
    }
    
 if(strstr(combined,str2)){
    printf("The one string is rotation of another ");
 }else{
    printf("The one string is not rotation of another ");
 }
    return 0;
}



 
