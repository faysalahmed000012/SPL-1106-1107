/*
Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.

Input
The input file will contain 2 integer numbers.

Output
Print the letter X (uppercase) with a blank space before and after the equal signal followed by the value of X, according to the following example.

*/


#include <stdio.h>  

int main() {  

    
    int a,b;   // declaring two integer variables
    // taking user input for variable a and b.
    scanf("%d",&a);  
    scanf("%d",&b);

    // adding two numbers.
    int sum = a + b;

    // showing output.
    printf("X = %d\n",sum);
    return 0;
}