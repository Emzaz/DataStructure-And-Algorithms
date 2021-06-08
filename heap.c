#include<stdio.h>

int left(int i)
{
    return 2 * i;
}

int right(int i)
{
    return 2 * i + 1;
}

int parent(int i)
{
    return i/2;
}

void max_heapify(int heap[], int heap_size, int i)
{
    int l, r, largest, temp;

    l = left(i);
    r = right(i);

    if(l <= heap_size && heap[l] > heap[i]) {
        largest = l;
    } else {
        largest = i;
    }

    if(r <= heap_size && heap[r] > heap[largest]) {
        largest = r;
    }

    if(largest != i) {
        temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        max_heapify(heap, heap_size, largest);
    }
}

void build_max_heap(int heap[], int heap_size)
{
    int i;

    for(i = heap_size/2; i >= 1; i--) {
        max_heapify(heap, heap_size, i);
    }
}

void heap_sort(int heap[], int heap_size)
{
    int i, temp;

    for(i = heap_size; i > 1; i--) {
        temp = heap[1];
        heap[1] = heap[i];
        heap[i] = temp;

        heap_size -= 1;
        max_heapify(heap, heap_size, 1);
    }
}

int main()
{
    int heap_size = 9, i;
    int heap[] = {0, 12, 7, 1, 3, 10, 17, 19, 2, 5};

    printf("Given tree or Array..............\n");
    for(i = 1; i <= heap_size; i++) {
        printf("%d ", heap[i]);
    }

    build_max_heap(heap, 9);

    printf("\nAfter building max heap..........\n");
    for(i = 1; i <= heap_size; i++) {
        printf("%d ", heap[i]);
    }

    heap_sort(heap, 9);

    printf("\nAfter sorting the heap..........\n");
    for(i = 1; i <= heap_size; i++) {
        printf("%d ", heap[i]);
    }

    return 0;
}
