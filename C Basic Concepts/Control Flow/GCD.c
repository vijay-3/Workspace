#include<stdio.h>
int main()
{
    int number1, number2, GCD, smaller, i;
    printf("Enter the number1:");
    scanf("%d",&number1);
    printf("Enter the number2:");
    scanf("%d",&number2);
    smaller=(number1<number2)?number1:number1;
    for(i=1;i<=smaller;i++)
    {
        if(number1%i==0 && number2%i==0)
        {
            GCD=i;
        }
    }
    printf("GCD of %d and %d is:%d",number1,number2,GCD);
}