/*
Activity: divide decimals with round-off
You are building a new home and you have calculated exactly how much cement you 
need for the foundation. Ideally you'd like to purchase this exact amount of cement, 
but the store only sells cement in 120-pound bags. Each of these bags costs 45 dollars. 
Please write a C-program that calculates the cost of the cement you will have to purchase 
to build your foundation.

Your program should first read a decimal number representing the amount of cement needed 
(in pounds) for the foundations of your new home. Your program should then display the total 
cost of the cement bags you have to purchase to have enough cement to build your foundation. 
To make your program simpler, you are guaranteed that the amount of cement needed will NEVER 
be a multiple of 120.

Example
Input:
295.8
Output:
135


In this example, you need 295.8 pounds of cement. Since the store only sells cement in 
increments of 120 pounds, you will need three bags (360 pounds) since 2 bags (240 pounds) 
is not enough and you cannot buy fractions of a bag. Since bags cost $45 each, the total 
cost is 45 * 3, or 135 dollars.

*/


#include <stdio.h>
#include <math.h>

int main(void) {


    double cement;

    scanf("%lf", &cement);

    int nBags = ceil(cement/120);
    // printf("will need %d bags of cement", nBags);

    int price = nBags * 45;

    // printf("will come to a final price of %d", price);
    printf("%d", price);

    return 0;
    
}