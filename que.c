#include <stdio.h>

#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;

main()
{
    int choice;
    while (1 ==1)
    {
        printf("1.Insert \n");
        printf("2.Delete \n");
        printf("3.Display \n");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                que();
                break;
            }
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            default:
            printf("Wrong \n");
        }//End witch
    } //End while
} //End main()


que()
{
    int add_item = 5;


    while(add_item != 0)
    {
        if (rear == MAX - 1)
        printf("Queue Overflow \n");
        else
        {
            if (front == - 1)
            //If queue is empty
            front = 0;
            printf("Inset the element in queue : ");
            scanf("%d", &add_item);
            rear = rear + 1;
            queue_array[rear] = add_item;
    }
    }
}//end que

delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} /*End of delete() */
display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} /*End of display() */
