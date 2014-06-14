#include<stdio.h>
#include<sys/time.h>

    int main()
    {
        int i, x;
        struct timeval start, stop, elapsed;
        
        gettimeofday(&start,NULL);
        x = 0;
        for (i = 1; i < 1001; i++)
        {
            x = x + i;
        }
        gettimeofday(&stop,NULL);
        timersub(&stop, &start, &elapsed);

        printf("%i %f \n", x, elapsed.tv_sec + elapsed.tv_usec/1000000.0);

        return 0;
    }
