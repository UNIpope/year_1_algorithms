#include <stdio.h>
#include <time.h>


int main()
{

    int c, first, last, middle, n, search, array[100];


    //starts clock
    clock_t start = clock();


    //enter elements
    printf("Enter number of elements\n");
    scanf("%d",&n);

    //enter contenbts of array
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d",&array[c]);
    }

    //enter val to search for
    printf("Enter value to find\n");
    scanf("%d", &search);


    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    //serch
    while (first <= last)
    {
        if (array[middle] < search)
        {
            first = middle + 1;
        }
        else if (array[middle] == search)
        {
            printf("%d found at %d.\n", search, middle+1);

            break;
        }
        else
        {
            last = middle - 1;

        }//end if else

        middle = (first + last)/2;

    }//end while


    //starts clock
    clock_t stop = clock();

    double elapsed = (double)(stop - start)* 1000.0 / CLOCKS_PER_SEC;
    printf("time elapsed is %f ms",elapsed);

    return 0;
}//end main
