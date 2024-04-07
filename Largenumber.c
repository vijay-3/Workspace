#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values for three variables:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is greater than othert %d   %d",a,b,c);
    
    }
    if(b>a&&b>c)
    {
        printf("%d is greater than otherd %d   %d",b,a,c);
    }
    else
    {
        printf("All are equal");    
    }
}