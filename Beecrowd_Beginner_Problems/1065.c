#include <stdio.h>

int main(){

    int count = 0;
    int num;

    for(int i =0;i<5;i++){
        scanf("%d",&num);
        if(num %2 == 0){
            count ++;
        }
    }

    printf("%d valores pares\n", count);

    return 0;
}