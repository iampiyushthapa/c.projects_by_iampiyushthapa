#include <stdio.h>
#include <string.h>

int main() {
    // Q94: Find the longest word in a sentence.

    char str[50];
    char longest[50];
    int currentLength = 0;
    int longestLength = 0;

    printf("Enter the sentence : ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    for(int i = 0;i <= length;i++){
if(str[i]!=' ' && str[i]!='\n' && str[i]!='\0'){
  currentLength++;
  }else{
    if(currentLength>longestLength){
        longestLength = currentLength;

        for(int k =0;k<currentLength;k++){
            longest[k]=str[i-currentLength + k];
        }
        longest[currentLength] = '\0';
    }

  currentLength = 0;
}
    }
    
    printf("The longest word in a sentence is : %s",longest);
    
    return 0;
}



 
