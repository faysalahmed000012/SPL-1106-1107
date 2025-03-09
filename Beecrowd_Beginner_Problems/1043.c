#include <stdio.h>


int main(){
    float a,b,c;

    scanf("%f %f %f",&a,&b,&c);

    if((a + b > c) && (a + c > b) && (b + c> a)){
        float perimeter = a + b + c;
        printf("Perimetro = %.1f\n",perimeter);
    }else{
        float area = ((a+b) * c)/2.0;
        printf("Area = %.1f\n",area);
    }
    

    return 0;
}