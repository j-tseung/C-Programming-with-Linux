/*
Activity: find the longest word in a text

Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.

 

Examples
Input:
14
This is a simple example text
we have to find the largest word length
Output:
7
Input:
7
All cats are grey in the dark
Output:
4
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.

Note
You may submit as many solutions as you wish. Only your highest score will be kept.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int length, i = 0, max = 0;
    char word[101];
    
    scanf("%d", &length);
    
    while (i<length){
        scanf("%s", word);
        if (strlen(word) > max){
            max = strlen(word);
        }
        i++;
    }

    printf("%d", max);
    
    return 0;
}