//program to to sum series

#include <stdio.h>
#include <time.h>

int main()
{
    int i,j = 0;
    int total = 1;

    int msec = 0, trigger = 10; /* 10ms */
    clock_t before = clock();

    //ask for
    printf("enter number of times? \n");
    scanf("%d",&j);

    for(i = 0; i < j; i++)
    {
        total = total + total;

        clock_t difference = clock() - before;
        msec = difference * 1000 / CLOCKS_PER_SEC;
    }//end 4

    printf("total = %d \n\n",total);

    printf("Time taken %d seconds %d milliseconds (%d iterations)\n",msec/1000, msec%1000, i);

}//end main

