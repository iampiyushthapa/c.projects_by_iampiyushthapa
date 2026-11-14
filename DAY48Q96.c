#include <stdio.h>
#include <string.h>

int main() {
    // Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

    char str[50];
  
     printf("Enter the sentence : ");
    fgets(str,sizeof(str),stdin);
     int length = strlen(str);

     for(int i = 0;i<length;i++){
      if(str[i]!=' ' && str[i]!='\n' ){
         int start = i;

          while(i<length &&str[i]!=' ' && str[i]!='\n'  ){
                i++;
         }
         int end = i-1;

         for(int left = start,right = end;left<right;left++,right--){
            char temp = str[left];
            str[left]=str[right];
            str[right] = temp;
         }
      }
     }

  printf(" After reversing each word : %s",str);

    return 0;
}



 
