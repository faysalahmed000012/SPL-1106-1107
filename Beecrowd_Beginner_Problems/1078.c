#include <stdio.h>

 int main(){

    int num;

    scanf("%d",&num);

    for(int i = 1;i <= 10; i++){
        int multiply = i * num;
        printf("%d x %d = %d\n",i,num,multiply);

    }

    return 0;
 }