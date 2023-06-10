/*
Activity: is there a 't' in this word?

You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.

Examples
Input:
apple
Output:
-1
 
Input:
raincoat
Output:
2

Input:
enter
Output:
1

Input:
Taylor
Output:
1

*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define MAX 51
#define LETTER 't'

int main(void)
{
    char word[MAX];

    scanf("%s", word);

    int length = strlen(word);
    
    // making everything lowercase
    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = tolower(word[i]);
    }

    // Search for the letter in the word
    char* result = strchr(word, LETTER);

    if (result != NULL) {
        // subtracts memory address of start of string from address of found character
        int index = result - word;
        if (index <= length/2)
            printf("1");
        else
            printf("2");
    } else 
        printf("-1");
    

    return 0;
}

