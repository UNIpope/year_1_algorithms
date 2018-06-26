/*generating random intergers and using liner serch
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c ,i ,n , array[10000], array1[10000];
    int counter = 0;
    int range =500 ;

    //enter size of array
    printf("Enter number of intergers \n");
    scanf("%d",&n);

    //fill arrays
    for (c = 0; c < n; c++)
    {
        array[c] = rand() % range + 1;
    }//end 4

    for (c = 0; c < n; c++)
    {
        array1[c] = rand() % range + 10;
    }//end 4

    //print
    for (c = 0; c < n; c++)
    {
        printf("%d  %d \n",array[c], array1[c]);

    }//end 4


    //liner serch
    for(i = 0; i<n ; i++)
    {
        for (c = 0; c < n; c++)
        {
            if (array[c] == array1[i])     /* if required element found */
            {
                counter++;
            }//end if
        }//end 4
    }//end 4
    if(counter==0)
    {
        printf("nothing was found");
    }//end if

    printf("\n the program found %d matches",counter);

    return (0);
}//end main
