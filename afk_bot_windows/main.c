#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int windows_mouse_mover();
int get_minutes();
int get_interval();

int main()
{
    int minutes = get_minutes();
    int interval = get_interval();

    srand(time(NULL));
    
    time_t start_time = time(NULL);
    time_t current_time = start_time;
    int elapsed_seconds = 0;
    int x = 0;

    while(elapsed_seconds < minutes * 60)
    {
            current_time = time(NULL);
            elapsed_seconds = (int) difftime(current_time, start_time);
            if(elapsed_seconds % interval == 0)
            {
                windows_mouse_mover();
                Sleep(interval * 1000);
            }
            
    }
    return 0;
    
    printf("Invalid input\n");
    return 0;

    return 0;
}