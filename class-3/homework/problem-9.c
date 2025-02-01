#include <stdio.h>
#include <string.h>
 
int main() {
 

     char name[100];   // initiating a string (not shown in tha class).

     double initialSalary,sold,finalSalary;  // initiating initialSalary, sold items and final salary

     scanf("%s %lf %lf",&name,&initialSalary,&sold); 
     finalSalary = initialSalary + (sold * 0.15);  // calculating final salary
     
     printf("TOTAL = R$ %.2lf\n",finalSalary);
     
     
 
    return 0;
}