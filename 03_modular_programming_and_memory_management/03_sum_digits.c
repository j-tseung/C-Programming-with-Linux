/*
Activity: use recursion to compute the sum of digits

Please write a C-program that uses a recursive function called "sumOfDigits()" to 
compute the sum of the digits of a number. To do so, your main function should first 
read an integer number as input and then call sumOfDigits(), which should in turn call 
itself until there are no digits left to sum, at which point the final sum should display 
to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:

sumOfDigits(6452) = 2 + sumOfDigits(645)

sumOfDigits(645) = 5 + sumOfDigits(64)

...

sumOfDigits(6) = 6

Examples
Input
47253
Output
21
 

Input
643
Output
13

*/
#include <stdio.h>
#include <math.h>

int sumOfDigits(int number);
int countDigits(int number);

int main(void)
{
    int number;
    scanf("%d", &number);

    int digits = countDigits(number);

    int sum = sumOfDigits(number);
    printf("%d\n", sum);

    return 0;
}

int sumOfDigits(int number){

    if (number == 0) {
        return 0;
    } else {
        return (number % 10) + sumOfDigits(number / 10);
    }

}

int countDigits(int number) {
    int count = 0;

    // Handle negative numbers
    if (number < 0)
        number = -number;

    // Count the digits
    while (number != 0) {
        number /= 10;
        count++;
    }

    return count;
}