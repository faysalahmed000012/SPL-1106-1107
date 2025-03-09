#include <stdio.h>

int main(){
    int positive = 0;
    float num;

    for(int i=0;i<6;i++){
        scanf("%f",&num);
        if(num >0){
            positive ++;
        }
    }

    printf("%d valores positivos\n",positive);

    return 0;
}