#include <stdio.h>

int main(){
    int positive = 0;
    float num,sum = 0;

    for(int i=0;i<6;i++){
        scanf("%f",&num);
        if(num >0){
            positive ++;
            sum += num;
        }
    }

    float average = sum / positive;

    printf("%d valores positivos\n",positive);
    printf("%.1f\n",average);

    return 0;
}