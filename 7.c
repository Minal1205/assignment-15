#include <stdio.h>
/*Write a function in C to count a total number of duplicate elements in an array.(Means
elements that occurs 2 times in an array)*/

int duplicate(int c[], int size)
{
    int hash[10] = {0}, i;
    for (i = 0; i < size; i++)
    {
        hash[c[i]]++;
    }
    printf("DUplicate elements are ");
    for (i = 0; i < size; i++)
    {
        if (hash[i] == 2)
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

    duplicate(a, 10);

    return 0;
}