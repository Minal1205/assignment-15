#include <stdio.h>
//a function in C to merge two arrays of the same size sorted in descending order.
void merge(int a[], int b[], int size1, int size2)
{
    int n3 = size1 + size2;
    int c[n3];
    for (int i = 0; i < size1; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < size2; i++)
    {
        c[i + size1] = b[i];
    }

    printf("The merged array: ");
    for (int i = 0; i < n3; i++)
        printf("%d ", c[i]); // Print the merged array

    printf("\nFinal array after sorting: ");
    for (int i = 0; i < n3; i++)
    {
        int temp;
        for (int j = i + 1; j < n3; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for (int i = 0; i < n3; i++)
        printf(" %d ", c[i]);
}
int main()
{
    int n1, n2;
    printf("Enter the size of first array\n");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter the array elements: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter the array elements\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    merge(a, b, n1, n2);

    return 0;
}