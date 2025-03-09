#include <stdio.h>

int main(){

    int a,b,c;
    int sorted[3];

    scanf("%d %d %d",&a,&b,&c);

    sorted[0] = a;
    sorted[1] = b;
    sorted[2] = c;

    // bubble sort 0(n^2)
    for(int i =0; i < 2;i++){
        for (int j = i +1;j<3;j++){
            if(sorted[i] > sorted[j]){
                int temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    // print sort 
    for(int i = 0;i<3;i++){
        printf("%d\n",sorted[i]);
    }

    // another new line between two results
    printf("\n"); 

    // printing in input order
    printf("%d\n%d\n%d\n",a,b,c);


    return 0;
}