// these are the code shown by teacher .

#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int sum=x+y;
    printf("Summation of %d and %d is %d.\n",x,y,sum);

    int sub=x-y;
    printf("Subtraction of %d and %d is %d.\n",x,y,sub);

    int reminder= x%y;
    printf("Reminder of %d and %d is %d.\n",x,y,reminder);

    ++x;
    printf("After increment of x is %d.\n",x);

    --y;
    printf("After decrement of y is %d.\n",y);
    return 0;
}