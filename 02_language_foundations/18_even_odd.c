/*
Activity: even or odd number of letters in a word?

At the annual meeting of MOOC fans, participants register on the first day of the event in order to receive their name tags, brochures and banquet vouchers. Unfortunately this often results in long lines. In an attempt to speed things up, there are now two people working the registration desk: one person who has the registration materials for those fans whose names contain an odd number of letters, the other for those whose names have an even number of letters. Your job is to write a C-program that will tell a fan which line to stand in.

To simplify the program, you may assume that student names are less than 50 characters long and contain no spaces. Your program should output an integer value (1 or 2) depending on whether the fan should join line 1 (name has even number of letters) or line 2 (name has odd number of letters).

Examples
Input:
Sharrock
Output:
1
 
Input:
Bonfert
Output:
2
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.

Note
You may submit as many solutions as you wish. Only your highest score will be kept.

*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[51];
    scanf("%s", name);
    if (strlen(name)%2)
        printf("2");
    else
        printf("1");

    return 0;
}