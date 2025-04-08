/*
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

*/

#include <stdio.h>

int main()
{

    int hour, minute, seconds, n;
    scanf("%d", &n); // taking n as seconds.

    // calculating hour.
    hour = n / 3600; // 1 hour = 3600 seconds.
    int leftAfterHour = n % 3600;

    // calculating minutes.
    minute = leftAfterHour / 60; // 1 minute = 60 seconds.
    seconds = leftAfterHour % 60;

    printf("%d:%d:%d\n", hour, minute, seconds);

    return 0;
}