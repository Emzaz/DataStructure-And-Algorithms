#include<stdio.h>

void quick_sort(int A[], int low, int high)
{
    if(low >= high) {
        return;
    }

    int p;

    p = partition(A, low, high);

    quick_sort(A, low, p-1);
    quick_sort(A, p+1, high);
}

int partition(int A[], int low, int high)
{
    int pivot, i, j, temp;

    pivot = A[high];
    for(i = low-1, j = low; j < high; j++) {
        if(A[j] < pivot) {
            i++;
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }

    temp = A[high];
    A[high] = A[i+1];
    A[i+1] = temp;

    return i += 1;
}

int main()
{
    int n = 8, i;
    int A[] = {1, 3, 8, 9, 6, 4, 2, 7, 5};

    quick_sort(A, 0, n);

    for(i = 0; i <= n; i++) {
        printf("%d ", A[i]);
    }
}
