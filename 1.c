#include <stdio.h>
// function to find the greatest number from the given array of any size. (TSRS)
int max(int a[], int size)
{
    printf("Enter Array Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int x;
    printf("Enter Array Size\n");
    scanf("%d", &x);
    int arr[x];
    int c = max(arr, x);
    printf("Maximum=%d\n", c);
    return 0;
}