/*
Activity: find repeat letters in a word

You are still conducting linguistic research! This time, you'd like to write a 
program to find out how many letters occur multiple times in a given word. Your 
program should read a word from the input and then sort the letters of the word 
alphabetically (by their ASCII codes). Next, your program should iterate through 
the letters of the word and compare each letter with the one following it. If these 
equal each other, you increase a counter by 1, making sure to then skip ahead far 
enough so that letters that occur more than twice are not counted again. You may 
assume that the word you read from the input has no more than 50 letters, and that 
the word is all lowercase.

 

Examples
Input:
apple
Output:
1
 

Input:
keeper
Output:
1
 

Input:
erroneousnesses
Output:
5
 

Input:
taylor
Output:
0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int count_duplicate_letters(const char* word) {
    int count = 0;
    int letters[26] = {0}; // Assuming the word contains only lowercase letters

    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        int index = word[i] - 'a'; // Calculate the index of the letter
        letters[index]++;
    }

    for (int i = 0; i < 26; i++) {
        if (letters[i] > 1) {
            count++;
        }
    }

    return count;
}

int main() {
    char word[51]; // Assuming the word has no more than 50 letters

    scanf("%s", word);

    int result = count_duplicate_letters(word);

    printf("%d\n", result);

    return 0;
}


