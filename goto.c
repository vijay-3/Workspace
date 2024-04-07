#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, sum;
    printf("Enter a Number: ");
    scanf("%d",&n);
    sum=n%2;
    
    if(sum==0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
    even:
    {
        printf("%d is an even\n",n);
        exit(0);
    }
    odd:
    {
        printf("%d is an odd\n",n);
    }
}