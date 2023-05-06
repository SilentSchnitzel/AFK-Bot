#include <stdio.h>


int get_minutes()
{
    printf("Enter in how many minutes you want the afk bot to run for: ");

    int minutes;
    scanf("%d", &minutes);
    return minutes;
}
int get_interval()
{
    printf("Enter in the amount of seconds that should be inbetween each automated mouse movement: ");
    
    int interval;
    scanf("%d", &interval);
    return interval;
}