
/*

Activity: convert integers to doubles

You are helping a teacher average grades. You get bored computing averages by hand, 
so you decide to write a computer program to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. 
Next, your program will read the grades one by one, all of which are integers as well. 
Finally, your program will calculate and print the average of the grades to two decimal 
places.

Example
Input:
4
10
8
16
9
Output:
10.75

*/

#include <stdio.h>

int main(void) {

    int nGrades = 0, grade = 0, sum = 0;    // when you don't assign anything, its some random number

    scanf("%d", &nGrades);

    for (int i = 0; i<nGrades; i++){

        scanf("%d", &grade);
        sum += grade;

        // printf("inputted grade= %d\n", grade);
        // printf("current sum = %d\n", sum);
    }

    // printf("number of grades = %d\n", nGrades);
    // printf("sum of grades = %d\n", sum);

    printf("%.2lf", (double)sum / (double)nGrades);

    return 0;
}