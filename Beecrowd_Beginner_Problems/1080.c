#include <stdio.h>


int main(){

    int max = 0,index;

    for(int i = 1;i <= 100;i++){
        int num;
        scanf("%d",&num);

        if(num > max){
            max = num;
            index = i;
        }
    }

    printf("%d\n",max);
    printf("%d\n",index);

    return 0;
}