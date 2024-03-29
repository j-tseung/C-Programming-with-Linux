/*
Activity: read characters

Write a C-program that reads an input character (using scanf) and displays the 
following pyramid pattern using the character read: 

Examples
Input
#
Output
++++#++++
+++###+++
++#####++
+#######+
#########
Input
o
Output
++++o++++
+++ooo+++
++ooooo++
+ooooooo+
ooooooooo
*/

#include <stdio.h>


int main(void) {

    char letter;


    scanf("%c", &letter);
    // printf("%c", letter);

    printf("++++%c++++\n", letter);
    printf("+++%c%c%c+++\n", letter, letter, letter);
    printf("++%c%c%c%c%c++\n", letter, letter, letter, letter, letter);
    printf("+%c%c%c%c%c%c%c+\n", letter, letter, letter, letter, letter, letter, letter);
    printf("%c%c%c%c%c%c%c%c%c\n", letter, letter, letter, letter, letter, letter, letter, letter, letter);


    return 0;
}
