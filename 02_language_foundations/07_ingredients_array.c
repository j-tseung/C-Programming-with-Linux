/*
Activity: store recipe ingredients in an array

Your grandparents gave you a fantastic cooking recipe but you can never remember how much 
of each ingredient you have to use! There are 10 ingredients in the recipe and the 
quantities needed for each of them are given as input (in grams). Your program must read 
10 integers (the quantities needed for each of the ingredients, in order) and store them 
in an array. It should then read an integer which represents an ingredient's ID number 
(between 0 and 9), and output the corresponding quantity.

Example
Input:
500 180 650 25 666 42 421 1 370 211
3
Output:
25

*/
#include <stdio.h>

int main(void){

    int ingriedients[10];
    int id;

    for (int i = 0; i < 10; i++){
        scanf("%d", &ingriedients[i]);
    }

    scanf("%d", &id);

    printf("%d", ingriedients[id]);
}
