#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	char reverse[20];
	int c;
	int i = 0;
	int j = 0;
	int k;



	printf("Enter a word: ");

	while((i<20)&&((c=getchar())!='\n'))
	{
		str[i] = c;
		i++;
	}

	k=i;

	while(i >= 0)
	{
		reverse[j]=str[i-1];
		j++;
		i--;
	}

	++i;
	printf("\n");

		while(i<k)
		{
			putchar(reverse[i]);
			i++;
		}
	printf("\n");

	return 0;
}
