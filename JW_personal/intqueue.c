#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int max;
    int num;
    int front;
    int rear;
    int *que;
} IntQueue;

int Queue_init(IntQueue *q, int max);
int Enque(IntQueue *q, int x);



int main()
{

}

int Queue_init(IntQueue *q, int max)
{
    q->front = 0;
    q->rear = 0;
    q->num = 0;
    if ((q->que = calloc(max, sizeof(int))) == NULL)
    {
        q->max = 0;
        return -1;
    }
    q->max = max;
    return 0;
}

int Enque(IntQueue *q, int x)
{
    if (q->num >= q->max)
    {
        return -1;
    }
    q->que[q->rear] = x;
    q->rear = (q->rear+1)%q->max;
    return 0;
}

int Deque(IntQueue *q, int *x) 
{
    if (q->num <= 0)
    {
        return -1;
    }
    *x = q->que[q->front];
    q->front = (q->front+1)%q->max;
    return 0;
}