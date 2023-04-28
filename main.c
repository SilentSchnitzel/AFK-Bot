#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linux_mouse_mover();
int get_os();
int get_minutes();
int get_interval();

int main()
{
    int os, minutes, interval;
    os = get_os();
    minutes = get_minutes();
    interval = get_interval();
    
    srand(time(NULL));
    
    time_t seconds;
    seconds = time(NULL);
    time_t min = seconds / 60;

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