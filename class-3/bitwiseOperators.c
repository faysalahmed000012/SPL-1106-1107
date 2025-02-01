// these are the codes shown by teacher

#include<stdio.h>
int main()
{
    int x=8,y=17;
    printf("Bitwise AND of %d and %d is %d\n",x,y,x&y);
    printf("Bitwise OR of %d and %d is %d\n",x,y,x|y);
    printf("Bitwise XOR of %d and %d is %d\n",x,y,x^y);
    printf("1's complement of %d is %d\n",x,~x);
    printf("2 right shift of %d is %d\n",x,x>>2);
    printf("2 left shift of %d is %d\n",x,x<<2);
    return 0;
}