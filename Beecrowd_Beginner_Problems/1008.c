#include <stdio.h>
 
int main() {
 
     int number;  
     double hour,rate, salary;  // initiating number, hour, rate and salary
     
     scanf("%d %lf %lf",&number,&hour,&rate); // taking input if number, hour and rate
     
     salary = hour * rate;   // calculating salary
     printf("NUMBER = %d\n",number);   
     printf("SALARY = U$ %.2lf\n",salary);    
         
    return 0;
}