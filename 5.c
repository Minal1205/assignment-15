#include <stdio.h>
// to find the first occurrence of adjacent duplicate values in the array.
int duplicate(int c[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (c[i] == c[i + 1])
        {
            return c[i];
            break;
        }
    }
}
int main()
{
    int a[10];
    printf("Enter Array Elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("First adjacent occurence element is %d\n", duplicate(a, 10));

    return 0;
}