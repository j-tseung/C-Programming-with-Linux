/*
Activity: repeat a word read from the user input

Write a C-program that prints out a word as many times as specified. The number of repetitions and the word should be given as input to the program. You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!).

 

Examples
Input:
2 Hello
Output:
Hello
Hello
 

Input:
4 thing
Output:
thing
thing
thing
thing
 

Note
You may submit as many solutions as you wish. Only your highest score will be kept.

*/
#include <stdio.h>

#define MAX 101

int main(void) {

    int repeat, i = 0;
    char array[MAX];

    scanf("%d %s", &repeat, array);

    while (i<repeat){
        printf("%s\n", array);
        i++;
    }

}