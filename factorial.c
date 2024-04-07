#include<stdio.h>
int main()
{
    int n, i, j=1;
    printf("Enter a value:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        j=j*i;
    }
    printf("%d",j);
}