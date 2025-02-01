// these are the codes shown by teacher

#include<stdio.h>
int main()
{
    int num1, num2;//variable declaration
    num1=10;//value assign
    num2=11;//value assign

    float average = (num1+num2)/2.0;
    printf("Average of %d and %d is %.2f.\n",num1,num2,average);
    //%d %f are format specifier
    //.2 before f is used to print 2 digits after the decimal point
    return 0;
}