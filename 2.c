#include <stdio.h>
// function to find the smallest number from the given array of any size. (TSRS)
int min(int a[], int size)
{
    printf("Enter Array Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int x;
    printf("Enter Array Size\n");
    scanf("%d", &x);
    int arr[x];
    int c = min(arr, x);
    printf("Minimum=%d\n", c);
    return 0;
}