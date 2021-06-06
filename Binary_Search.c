#include<stdio.h>

int binary_search(int a[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        if (a[mid] < x)
        {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n = 10;
    int arr[10] = {10, 15, 23, 28, 100, 101, 200, 250, 600, 1000};
    int x = 10;
    int result = binary_search(arr, n, x);

    printf("Index of searching element: %d and the element is: %d", result+1, arr[result]);

    return 0;
}
