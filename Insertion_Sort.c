#include<stdio.h>

void insertion_sort(int a[], int n)
{
    int i, j, item;

    for(i = 1; i < n; i++) {
        item = a[i];

        j = i - 1;
        while(j >= 0 && a[j] > item) {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = item;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n = 10;
    int arr[10] = {10, 5, 3, 80, 100, 101, 20, 25, 60, 1};

    insertion_sort(arr, n);
}
