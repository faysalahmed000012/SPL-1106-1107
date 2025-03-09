#include <stdio.h>


int main(){

    int num;

    scanf("%d",&num);

    for (int i = 0; i < 6; num++) {
        if (num % 2 != 0) {
            printf("%d\n", num);
            i++;
        }
    }
    

    return 0;
}