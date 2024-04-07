#include<stdio.h>
int main()
{
    int i;
    printf("Enter the value:");
    scanf("%d",&i);
    if(i % 2==0)
    {
        printf("%d is Even\n",i);
    }
    else
    {
        printf("%d is Odd",i);
    }
}