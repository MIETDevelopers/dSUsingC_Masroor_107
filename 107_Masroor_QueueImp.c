#include <stdio.h>
#include <stdlib.h>
# define SIZE 100
void enqueue();
void dequeue();
void show();
int queue[SIZE];
int Rear = - 1;
int Front = - 1;
int main()
{
    int ch;
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
} 
  
void enqueue()
{
    int insert_item;
    if (Rear == SIZE - 1)
       printf("The queue is full  \n");
    else
    {
        if (Front == - 1)
            Front = 0;
        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        queue[Rear] = insert_item;
    }
} 
  
void dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("There are no elements in the queue \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", queue[Front]);
        Front = Front + 1;
    }
} 
  
void show()
{
     
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}