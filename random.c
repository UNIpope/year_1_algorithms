#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int c, n, search, array[100000];

    //enter elements
    printf("Enter number of elements\n");
    scanf("%d",&n);
    fflush(stdin);
    srand(0);
    //enter contenbts of array
    for (c = 0; c < n; c++)
    {
        array[c] = rand();
    }

    //enter val to search for
    printf("Enter value to find\n");
    scanf("%d", &search);


    for(c=0; c<n; c++)
    {
        if(array[c] = search)
        {
            printf("Found element at %d of array",c);
        }
    }

   return(0);
}//endmain
