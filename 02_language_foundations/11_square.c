/*
Activity: print a square of stars using nested loops

Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

Examples
Input:
5
Output:
*****
*****
*****
*****
*****
 
Input:
3
Output:
***
***
***
*/
#include <stdio.h>

int main(void){

    int rows;
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows; j++)
            printf("*");
        printf("\n");

    }

}
