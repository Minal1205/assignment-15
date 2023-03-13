#include <stdio.h>
//function to sort an array of any size. (TSRN)
void sort(int a[], int size)
{
    printf("Enter Array Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array in increasing order is printed below\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int x;
    printf("Enter Array Size\n");
    scanf("%d", &x);
    int arr[x];
    sort(arr,x);
    return 0;
}