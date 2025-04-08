/*
In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.



Input
The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.

Output
Print the animal name according to the given input.

*/

#include <stdio.h>
#include <string.h>

int main()
{

    // taking string as array of char
    char word1[20], word2[20], word3[20];

    scanf("%s", word1);
    scanf("%s", word2);
    scanf("%s", word3);

    // applying logic for the complex diagram in the question.
    if (strcmp(word1, "vertebrado") == 0)
    {
        if (strcmp(word2, "ave") == 0)
        {
            if (strcmp(word3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else if (strcmp(word3, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
        else if (strcmp(word2, "mamifero") == 0)
        {
            if (strcmp(word3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else if (strcmp(word3, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(word1, "invertebrado") == 0)
    {
        if (strcmp(word2, "inseto") == 0)
        {
            if (strcmp(word3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else if (strcmp(word3, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        else if (strcmp(word2, "anelideo") == 0)
        {
            if (strcmp(word3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else if (strcmp(word3, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}