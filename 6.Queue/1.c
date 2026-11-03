#include<stdio.h>

int main()
{
    int queue[100];
    int front = -1;
    int rear = -1;

    printf("Enter elements: ");

    front = 0;

    for(int i = 0; i < 3; i++)
    {
        rear++;
        scanf("%d", &queue[rear]);
    }
    for(int i = 0; i < 3; i++)
    {
        
        printf("%d", &queue[i]);
    }
    printf("enqueue");


    return 0;
}