#include <stdio.h>

int main(){
    
    float bitAnd = 8 & 17;
    float bitOr = 8 | 17;
    float bitXor = 8 ^ 17;
    float bitNot = ~8;  // ~n = -(n+1)
    float bitLeftShift = 8 >> 2; // remove binary from right side, in this case, 2;
    float bitRightShift = 8 << 2; // add numbers (0) in right side, in this case, 2;

    printf("%f",bitRightShift);

    return 0;
}