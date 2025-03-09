#include <stdio.h>

int main(){

    float n1,n2,n3,n4,score, average, finalAverage;
    int weight1 = 2, weight2 = 3, weight3 = 4, weight4 = 1;

    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);


    average = (n1*weight1 + n2 * weight2 + n3 * weight3 + n4 * weight4) / (weight1 + weight2 + weight3 + weight4);

    printf("Media: %.1f\n",average);

    if(average >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(average < 5.0){
        printf("Aluno reprovado.\n");
    } else{
        printf("Aluno em exame.\n");

        scanf("%f",&score);
        printf("Nota do exame: %.1f\n",score);
    
        finalAverage = (average + score) / 2;
    
        if(finalAverage >= 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n",finalAverage);
        
    }

   

    return 0;
}