/*
Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. Calculate the average with weights 2, 3, 4 e 1 respectively, for these 4 scores and print the message "Media: " (Average), followed by the calculated result. If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student). If the average was less than 5.0, print the message: "Aluno reprovado." (Reproved Student). If the average was between 5.0 and 6.9, including these, the program must print the message "Aluno em exame." (In exam student).

In case of exam, read one more score. Print the message "Nota do exame: " (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous calculated average and divide by 2) and print the message “Aluno aprovado.” (Approved student) in case of average 5.0 or more) or "Aluno reprovado." (Reproved student) in case of average 4.9 or less. For these 2 cases (approved or reproved after the exam) print the message "Media final: " (Final average) followed by the final average for this student in the last line.

Input
The input contains four floating point numbers that represent the students' grades.

Output
Print all the answers with one digit after the decimal point.

*/

#include <stdio.h>

int main()
{

    float n1, n2, n3, n4, score, average, finalAverage;
    int weight1 = 2, weight2 = 3, weight3 = 4, weight4 = 1;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // calculating weighted average
    average = (n1 * weight1 + n2 * weight2 + n3 * weight3 + n4 * weight4) / (weight1 + weight2 + weight3 + weight4);

    printf("Media: %.1f\n", average);

    // applying the logic
    if (average >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (average < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");

        scanf("%f", &score);
        printf("Nota do exame: %.1f\n", score);

        finalAverage = (average + score) / 2;

        if (finalAverage >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", finalAverage);
    }

    return 0;
}