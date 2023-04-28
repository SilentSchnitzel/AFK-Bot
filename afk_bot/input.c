#include <stdio.h>

int user_input()
{
    printf("Enter 1 if your OS is Windows or enter 2 in if you are using a distro of Linux: ");
    
    int os;
    scanf("%d", &os);

    printf("Enter in how many minutes you want the afk bot to run for: ");

    int minutes;
    scanf("%d", &minutes);

    printf("Enter in the amount of seconds that should be inbetween each automated mouse movement: ");
    
    int interval;
    scanf("%d", &interval);

    return os, minutes, interval;
}

