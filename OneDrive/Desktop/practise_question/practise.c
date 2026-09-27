

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue()
{
    if (rear == MAX - 1)
    {
        printf("Queue full\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        
        rear++;
        queue[rear] = 10;
        printf("Enqueued: %d\n", queue[rear]);

        rear++;
        queue[rear] = 20;
        printf("Enqueued: %d\n", queue[rear]);

        rear++;
        queue[rear] = 30;
        printf("Enqueued: %d\n", queue[rear]);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Dequeued: %d\n", queue[front]);
        front++;

       
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

int main()
{
    int i;

    enqueue();      
    dequeue();      

    
    if (rear == MAX - 1)
    {
        printf("Queue full\n");
    }
    else
    {
        rear++;
        queue[rear] = 40;
        printf("Enqueued: %d\n", queue[rear]);
    }

    printf("\nRemaining elements: ");
    for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    return 0;
}

