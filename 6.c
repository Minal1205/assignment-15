#include <stdio.h>
void reverse(int b[],int size){
    printf("Reverse of given array is printed below--->\n");
for(int j=size-1;j>=0;j--){
    printf("%d ",b[j]);
}

}
int main()
{
    int x;
    printf("Enter Size of array\n");
    scanf("%d", &x);
    int a[x];
    printf("Enter Array Elements\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    reverse(a,x);
    return 0;
}