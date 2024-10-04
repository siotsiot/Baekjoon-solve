#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 500001

typedef struct
{
    int data[MAX_QUEUE_SIZE];
    int front, rear;
} QueueType;

void init_queue(QueueType* q)
{
    q->front = q->rear = 0;
}

int is_empty(QueueType* q)
{
    return (q->front == q->rear);
}

int is_full(QueueType* q)
{
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void enqueue(QueueType* q, int item)
{
    if (is_full(q))
    {
        fprintf(stderr, "큐가 포화 상태입니다.\n");
        exit(1);
    }
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

int dequeue(QueueType* q)
{
    if (is_empty(q))
    {
        fprintf(stderr, "큐가 공백 상태입니다.\n");
        exit(1);
    }
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->data[q->front];
}

void card_2(int n)
{
    QueueType q;
    init_queue(&q);

    for (int i = 1; i <= n; i++)
        enqueue(&q, i);

    while ((q.rear - q.front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE != 1)
    {
        dequeue(&q);
        enqueue(&q, dequeue(&q));
    }
    printf("%d\n", dequeue(&q));
}

int main(void)
{
    int num;

    scanf("%d", &num);
    card_2(num);

    return 0;
}