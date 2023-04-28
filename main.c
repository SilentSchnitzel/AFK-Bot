#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user_input();
int linux_mouse_mover();

int main()
{
    int os, minutes, interval;
    os, minutes, interval = user_input();

    srand(time(NULL));
    
    time_t seconds;
    seconds = time(NULL);
    time_t min = seconds / 60;

    printf("%d", os);
    if(os == 1)
    {

    }

    if(os == 2)
    {
        printf("yooo");
        while((time(NULL)/60) - min == (time_t)minutes)
        {
            printf("help");
        }
        linux_mouse_mover();
    }

    printf("Invalid input\n");
    return 0;
}