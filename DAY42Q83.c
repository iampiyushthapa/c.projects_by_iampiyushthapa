#include <stdio.h>

int main() {
    // Q83: Count vowels and consonants in a string.

char str[50];
 int count_vowel = 0;
 int count_consonant = 0;


printf("Enter the characters of the string : ");
scanf("%s",str);

for(int i =0;str[i]!='\0';i++){
if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'|| 
    str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        count_vowel++;
    }
    else if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z')){
         count_consonant++;
    }
}
printf("The number of vowel in the string is : %d \n",count_vowel);
printf("The number of consonant in the string is : %d ",count_consonant);

    return 0;
}

 
