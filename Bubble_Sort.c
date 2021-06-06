#include<stdio.h>

void bubble_sort(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
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

    bubble_sort(arr, n);
}
