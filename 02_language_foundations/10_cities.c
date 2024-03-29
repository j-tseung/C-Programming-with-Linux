/*
Activity: branch inside a loop, how many big cities?

You want to determine the number of cities in a given region that have a population 
strictly greater than 10,000. To do this, you write a program that first reads the 
number of cities in a region as an integer, and then the populations for each city 
one by one (also integers).

Example
Input
6
1000
5000
15000
4780
0
23590
Output
2

*/
#include <stdio.h>

int main(void) {
    int quantity, i, counter = 0;
    scanf("%d", &quantity);

    int population[quantity];

    for (i = 0; i < quantity; i++) {
        scanf("%d", &population[i]);

        if (population[i] > 10000) {
            counter += 1;
        }
    }

    printf("%d", counter);

    return 0;
}
