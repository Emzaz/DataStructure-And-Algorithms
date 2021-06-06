#include<stdio.h>

void selection_sort(int a[], int n)
{
    int i, j, index_min, temp;

    for(i = 0; i < n-1; i++) {
        index_min = i;
        for (j = i+1; j < n; j++) {
            if(a[j] < a[index_min]) {
                index_min = j;
            }
        }
        if(index_min != i) {
            temp = a[i];
            a[i] = a[index_min];
            a[index_min] = temp;
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n = 10;
    int arr[10] = {10, 5, 3, 80, 100, 101, 20, 25, 60, 1};

    selection_sort(arr, n);
}
