#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(void)

{
    int i;
    char stack[SIZE];
    printf("please enter a random word:\n");
    scanf("%s",stack);

    /*for(i=0; i< SIZE; i++)
    {
        push(stack, %c );

    }//end 4

    */
    int len = strlen(stack);

    for (i = 0; i < len; i++)
    {
        printf("%c", stack[len]);
        --len;
    }

    return 0;
}
