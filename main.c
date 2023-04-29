#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

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
    
    time_t start_time = time(NULL);
    time_t current_time = start_time;
    int elapsed_seconds = 0;
    int x = 0;
    

    if(os == 1)
    {

    }

    if(os == 2)
    {
        while(elapsed_seconds < minutes * 60)
        {
            current_time = time(NULL);
            elapsed_seconds = (int) difftime(current_time, start_time);
            printf("%d", elapsed_seconds % interval);
            if(elapsed_seconds % interval == 0)
            {
                linux_mouse_mover();
                sleep(interval);
            }
            
        }
        return 0;
    }
    printf("Invalid input\n");
    return 0;
}