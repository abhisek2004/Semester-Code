
//assignment 5 q1

#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
void insert(int item)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Queue Overflow n");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == MAX - 1)
            rear = 0;
        else
            rear = rear + 1;
    }
    queue[rear] = item;
}
void deletion()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue Underflown");
        return;
    }
    printf("Element deleted from queue is : %dn", queue[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == MAX - 1)
            front = 0;
        else
            front = front + 1;
    }
}
void print()
{

    if (front == -1)
    {
        printf("Queue is emptyn");
        return;
    }
    printf("Queue elements :n");
    if (front <= rear)
        while (front <= rear)
        {
            printf("%d ", queue[front]);
            front++;
        }
    else
    {
        while (front <= MAX - 1)
        {
            printf("%d ", queue[front]);
            front++;
        }
        front = 0;
        while (front <= rear)
        {
            printf("%d ", queue[front]);
            front++;
        }
    }
    printf("n");
}
int main()
{
    int choice, item;
    do
    {
        printf("1.Insertn");
        printf("2.Deleten");
        printf("3.print");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input the element for insertion in queue : ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            deletion();
            break;
        case 3:
            print();
            break;
        default:
            printf("Wrong choicen");
        }
    } while (choice != 4);
    return 0;
}