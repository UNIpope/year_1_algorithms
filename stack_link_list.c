#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define max 1000

void push (int);
void pop (void);

int top,stack[max];

int main()
{
    int i;
	char str[24]={'E','A','S','*','Y','Q','U','E','*','*','*','S','T','*','*','*','I','O','*','N','*','*','*','*'};
	int len = strlen(str);


	for(i=0; i<len; i++)
	{

		if(str[i] == '*')
        {
            pop();
        }
        else
        {
            push(str[i]);
        }


	} //end 4


    return(0);
}//end main

void push(int ele)
{

    // Push
	if(top == max-1)
	{
		printf("Stack overflow");
	}
	else
	{
		stack[++top] = ele;
	}
}

void pop()
{
	// Pop
	printf("%c",stack[top--]);
}
