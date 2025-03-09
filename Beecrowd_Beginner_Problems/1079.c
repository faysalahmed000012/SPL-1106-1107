#include <stdio.h>

int main(){

    int range;
    float a,b,c;

    scanf("%d",&range);

    for(int i = 0;i < range;i++){
        scanf("%f %f %f",&a,&b,&c);

        float weightedAverage = (a * 2 + b * 3 + c * 5) / 10;

        printf("%.1f\n",weightedAverage);
    }

    return 0;
}