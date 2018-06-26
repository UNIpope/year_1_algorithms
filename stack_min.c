/*implement stack with a queue
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 100

void push (int);
void pop (void);
void min (void);

int array [max];
int top = 0;
int meme = 10000;

int main()
{
    int option = 0;
    int item = 0;

    while(1 == 1)
    {
        //menu
        printf("\nSelect an option from the following menu: \n1:Push a number \n2:pop \n3:Display stack\n");

        //option in menu
        option=getchar();
        fflush(stdin);

        switch(option)
        {
            case '1':
            {
                printf("enter item to push\n");
                scanf("%d",&item);
                fflush(stdin);

                push(item);

                break;

            }//end case 1
            case '2':
            {
                pop();
                break;

            }//end case 2
            case '3':
            {

                min();

                break;

            }//end case 3
            default:
            {

                //error check menu
                printf("\nEnter a number between 1-3.\n");

                break;

            }//end default

        }//end switch

    }// end while
}//end main()

void push(int push_var)
{

    // Push
	if(top == max-1)
	{
		printf("Stack overflow");
	}
	else
	{
		array[++top] = push_var;


        if(push_var <= meme)
        {
            meme = push_var;
        }
	}

}//end push()

void pop()
{
	printf("%d ",array[top]);
	array[top] = NULL;
	top--;
}//end pop()

void min()
{

    printf("\n lowest is %d \n",meme);

}//end min()
