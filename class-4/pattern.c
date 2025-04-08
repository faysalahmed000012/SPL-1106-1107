#include <stdio.h>



int main(){

    for(int i = 5 ; i >= 1; i--){
        for(int j = i; j >= 1;j--){
            printf("%d ",j);                // Time = O(n^2)
        }                                   // Space = O(0)
        printf("\n");
    }

    return 0;
}

