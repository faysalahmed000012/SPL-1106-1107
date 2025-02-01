// these are the code shown by teacher

#include<stdio.h>
int main()
{
    int num1,num2;//variable declaration

    scanf("%d %d",&num1,&num2);
    //scanf is used to take inputs from the user

    float average = (num1+num2)/2.0;

    printf("Average of %d and %d is %.2f.\n",num1,num2,average);
    return 0;
}