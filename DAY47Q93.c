#include <stdio.h>
#include <string.h>

int main() {
    // Q93: Check if two strings are anagrams of each other.

    /*
    Sample Test Cases:
    Input 1:
    listen
    silent
    Output 1:
    Anagrams

    Input 2:
    hello
    world
    Output 2:
    Not anagrams
    */

    char str1[50];
    char str2[50];
    int found = 1;
    int visited[50] = {0};

    printf("Enter the characters of the first string : ");
    scanf("%s", str1);

    printf("Enter the characters of the second string : ");
    scanf("%s", str2);

    int length1 = strlen(str1);
    int length2 = strlen(str2);

    if (length1 != length2) {
        found = 0;
    } else {
        for (int i = 0; i < length1; i++) {
            int matched = 0;
            for (int j = 0; j < length2; j++) {
                if (str1[i] == str2[j] && visited[j] == 0) {
                    visited[j] = 1;
                    matched = 1;
                    break;
                }
            }
            if (matched == 0) {
                found = 0;
                break;
            }
        }
    }

    if (found == 1) {
        printf("The two given strings are anagrams of each other");
    } else {
        printf("The two given strings are not anagrams of each other");
    }

    return 0;
}



 
