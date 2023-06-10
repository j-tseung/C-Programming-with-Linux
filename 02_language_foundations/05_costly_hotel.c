/*
Activity: more complex if statements: costly hotel rooms

The hostel in which you stop for the night changes its prices according to the age of the customer and the weight of their luggage. The rules are not very clear, so you decide to write a small program that will easily allow you and your travel companions to know the price of one night.

One room costs nothing if you are exactly 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old. For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage. Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.

Example
Input:
22
25
Output:
40
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.

*/
#include <stdio.h>
int main(void) {

    int age = 0, weight = 0, luggage = 0, cost = 0;

    scanf("%d", &age);
    scanf("%d", &weight);

    if (weight>20){
        luggage = 1;
    }

    if (age == 60){
        cost = 0;

    }else if(age < 10){
        cost = 5;

    }else{
        cost = 30 + 10*luggage;
    } 
 
    printf("%d", cost);

}

