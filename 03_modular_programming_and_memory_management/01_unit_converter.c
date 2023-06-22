/*
Activity: program a smart unit converter

Write a C-program that converts metric measurements to imperial system values. 
Measurements are provided to your program in meters, grams or degrees Celsius 
and must be converted to feet, pounds and degrees Fahrenheit, respectively.

Here are the conversion rules to use:

1 meter = 3.2808 feet;
1 gram = 0.002205 pounds;

temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

On the first input line you are given the number of conversions to be made. Each of 
the following lines contains a value to be converted as well as its unit: m, g or c 
(for meters, grams or degrees Celsius). There will be a space between the number and 
the unit. You should print your output value for each input line immediately after 
calculating it (ie, you do not have to wait until you have read all inputs).

Display the converted values with 6 decimal places, followed by a space and their 
unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result 
should be printed on its own line, and you should store and display all decimal values 
as doubles.

You may use functions to complete this exercise, but that is not required. However, 
you will need to use a comparison operation with characters, for example:

char letter = 'a';

if(letter == 'a') {...}

Example
The following entry indicates that there are four values to be converted. The first is 
10 meters, which, when converted, gives approximately 32.808 feet. The second is 1245.243 
grams, or about 2.745761 pounds, the third is 37.2 degrees Celsius, or 98.96 degrees 
Farenheit, and the fourth is 23 grams, or 0.050715 pounds.

Input
4
10 m
1245.243 g
37.2 c
23 g
 

Output
32.808000 ft
2.745761 lbs
98.960000 f
0.050715 lbs
*/

#include <stdio.h>

double convert(char unit, double measurement);
void format(char unit, double conversion);

int main(void)
{
    int toConvert;
    scanf("%d", &toConvert);

    double measurement;
    char unit;

    while (toConvert > 0){
        scanf("%lf %c", &measurement, &unit);
        double conversion = convert(unit, measurement);
        format(unit, conversion);
        toConvert--;
    }

    return 0;
}

double convert(char unit, double measurement){

    double conversion;

    if (unit == 'g'){
        conversion = measurement* 0.002205;
    }else if (unit == 'c'){
        conversion = 32 + 1.8*measurement;
    }else{ // (unit == 'm')
        conversion = measurement * 3.2808;
    }

    return conversion;
}

void format(char unit, double conversion){

    if (unit == 'g'){
        printf("%.6lf lbs\n", conversion);
    }else if (unit == 'c'){
        printf("%.6lf f\n", conversion);
    }else{ // (unit == 'm')
        printf("%.6lf ft\n", conversion);
    }
}