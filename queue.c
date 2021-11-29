#include <stdio.h>
#include <conio.h>
void insert(void);
void del(void);
void display(void);
int queue[100], n, choice, i;
int front = -1;
int rear = -1;

int main()
{
    printf("enter the size of the queue less than 100:  " );
    scanf("%d", &n);
    do
    {
        printf("enter your choice \n 1.insert \n 2.delete\n 3.display\n 4.exit \n");
        scanf("%d \n", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("exit");
            break;
        default:
            printf("invalid choice");
        }

    } while (choice != 4);
}
void insert()
{
    int num;
    if (rear >= n - 1)
    {
        printf("queue is overflow \n");
    }
    else
    {
        if (front == -1)
            front = 0;
        printf("enter the element to insert \n");
        scanf("%d", &num);
        rear = rear + 1;
        queue[rear] = num;
    }
}
void del()
{
    if (front == -1 || front > rear)
    {
        printf("queue is underflow \n");
    }
    else
    {
        printf("elements deleted from is : %d\n", queue[front]);
        front = front + 1;
    }
}
void display()
{
    if (front == -1)
    {
        printf("queue is empty \n");
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d", queue[i]);
        printf("\n");
    }
}
