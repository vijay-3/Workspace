#include<stdio.h>
int main()
{
    int n, i, j, k, l;
    printf("Enter a Odd Number: ");
    scanf("%d",&n);
    l=n;
    for(i=1;i<=n*2;i+=2)
    {
        for(j=1;j<l;j++)
        {
            printf("  ");
        }
        l=l-1;
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }    
}