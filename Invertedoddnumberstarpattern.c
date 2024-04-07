#include<stdio.h>
int main()
{
    int n, m, i, j, k, l;
    printf("Enter a Number: ");
    scanf("%d",&n);
    m=n*2-1;
    l=n;
    for(i=m;i>0;i-=2)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        for(k=n;k>=l;k--)
        {
            printf("  ");            
        }
        l=l-1;
    }
}