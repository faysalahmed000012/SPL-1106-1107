#include <stdio.h>

int main(){

    int num1,num2,sum=0;

    scanf("%d %d",&num1,&num2);

    if(num1 > num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for(int i = num1 + 1;i < num2; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }

    printf("%d\n",sum);

    return 0;
}