#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum(int num);

int main()
{
    int number, result;

    printf("Enter int :\t");
    scanf("%d",&number);

    result = sum(number);

    printf("sum = %d",result);


}//enmd man

int sum(int num)
{
    if (num != 0)
    {
        return pow(2, num) + sum(num - 1);
    }
    else
    {
        return num;
    }//end if else


}//end sum
