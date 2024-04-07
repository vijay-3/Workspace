#include<stdio.h>
int main()
{
    int n, i, k, j=0;
    printf("Enter a value: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        k=n%i;
        if(k==0)
        {
            j=1;
            //break;
        }
        break;
    }
    if(j==0)
    {
        printf("%d is prime\n",n);
    }
    else
    {
        printf("%d is not a prime\n",n);
    }
}