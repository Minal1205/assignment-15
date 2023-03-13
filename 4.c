#include <stdio.h>
// function to rotate an array by n position in d direction.
void rotation(int b[], int size, int d)
{

    for (int j = 0; j < d; j++)
    {
        int temp = b[0];
        for (int i = 0; i < size - 1; i++)
        {
            b[i] = b[i + 1];
        }
        b[size - 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", b[i]);
    }
}
int main()
{
    int x, d;
    printf("Enter Size of array\n");
    scanf("%d", &x);
    printf("Enter Repeatitions\n");
    scanf("%d", &d);
    int a[x];
    printf("Enter Elements\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    rotation(a, x, d);

    return 0;
}