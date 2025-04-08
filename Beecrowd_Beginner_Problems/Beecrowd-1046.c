/*
Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”

Input
Two integer numbers representing the start and end time of a game.

Output
Print the duration of the game as in the sample output.

*/

#include <stdio.h>

int main()
{
    int start, end, duration;

    scanf("%d %d", &start, &end);

    if (start < end) // if same day
    {
        duration = end - start;
    }
    else if (start > end) // if different day
    {
        duration = (24 - start) + end;
    }
    else // exact time 1 day
    {
        duration = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}