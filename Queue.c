#include<stdio.h>
#define QUEUE_SIZE 5


struct Queue {
    int data[QUEUE_SIZE + 1];
    int head, tail;
};

void enqueue(struct Queue *q, int item)
{
    if((q->tail + 1) % (QUEUE_SIZE + 1) == q->head) {
        printf("Queue is full!");
        return;
    }

    q->data[q->tail] = item;

    q->tail = (q->tail + 1) % (QUEUE_SIZE + 1);
}

int dequeue(struct Queue *q)
{
    int item;

    if(q->head == q->tail) {
        printf("Queue is empty!");
        return -1;
    }

    item = q->data[q->head];

    q->head = (q->head + 1) % (QUEUE_SIZE + 1);

    return item;
}

int main()
{
    struct Queue my_queue;
    int item;

    my_queue.head = 0;
    my_queue.tail = 0;

    enqueue(&my_queue, 1);
    enqueue(&my_queue, 2);
    enqueue(&my_queue, 3);
    enqueue(&my_queue, 4);
    enqueue(&my_queue, 5);

    item = dequeue(&my_queue);
    printf("%d ", item);

    item = dequeue(&my_queue);
    printf("%d ", item);

    item = dequeue(&my_queue);
    printf("%d ", item);

    item = dequeue(&my_queue);
    printf("%d ", item);

    item = dequeue(&my_queue);
    printf("%d ", item);

    enqueue(&my_queue, 6);

    item = dequeue(&my_queue);
    printf("%d ", item);

    enqueue(&my_queue, 7);

    item = dequeue(&my_queue);
    printf("%d ", item);

    enqueue(&my_queue, 8);

    item = dequeue(&my_queue);
    printf("%d ", item);

    enqueue(&my_queue, 9);
    enqueue(&my_queue, 10);

    item = dequeue(&my_queue);
    printf("%d ", item);

    item = dequeue(&my_queue);
    printf("%d ", item);
}
