#include <stdio.h>

int main(){

    float salary, newSalary, adjustment;
    int percentage;

    scanf("%f",&salary);

    if (salary >= 0 && salary <= 400.00) {
        percentage = 15;
    } else if (salary <= 800.00) {
        percentage = 12;
    } else if (salary <= 1200.00) {
        percentage = 10;
    } else if (salary <= 2000.00) {
        percentage = 7;
    } else {
        percentage = 4;
    }

    adjustment = salary * percentage / 100.0;
    newSalary = salary + adjustment;

    printf("Novo salario: %.2f\n", newSalary);
    printf("Reajuste ganho: %.2f\n", adjustment);
    printf("Em percentual: %d %%\n", percentage);


    return 0;
}