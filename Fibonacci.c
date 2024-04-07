#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n, m1=0, m2=1, m3, i;
    printf("Enter the range of fibonacci series:");
    scanf("%d",&n);
    system("clear");
    printf("%d  ",m2);
    for(i=0;i<=n;i++)
    {
        m3=m1+m2;
        m1=m2;
        m2=m3;
        printf("%d  ",m3);
    }
    return 0;
}