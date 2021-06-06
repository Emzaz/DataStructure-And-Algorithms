#include<stdio.h>
int linear_search(int a[], int n, int x)
{
    int i;

    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n = 10;
    int arr[10] = {10, 5, 3, 80, 100, 101, 20, 25, 60, 1};
    int x = 20;
    int result = linear_search(arr, n, x);

    printf("Index of searching element: %d and the element is: %d", result+1, arr[result]);

    return 0;
}
