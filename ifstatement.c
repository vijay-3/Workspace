#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the value for i and :");
    scanf("%d %d",&i,&j);
    if(i<j)
    {
        printf("%d is Greater thann %d",j,i);
    }
    else
    {
        printf("%d is Greater than %d",i,j);
    }
}