#include <stdio.h>
// to print all unique elements in an array.

int unique(int c[], int size)
{
    int hash[10] = {0}, i;
    for (i = 0; i < size; i++)
    {
        hash[c[i]]++;
    }
    printf("Unique elements are ");
    for (i = 0; i < size; i++)
    {
        if (hash[i] == 1)
        {
            printf("%d ", i);
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

    unique(a, 10);

    return 0;
}