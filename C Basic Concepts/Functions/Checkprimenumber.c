                                    // It is the first program of function topic
                                    // Check the given number is prime or not
#include<stdio.h>
int checkprime(int);
int checkprime(int n)
{
    int i, flag=0;
                    // Check the given number is prime or not by using for loop and if statement
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    int number, retur;
    printf("Enter the number:");
    scanf("%d",&number);
                                // The output of function is stored in the retur variable
    retur=checkprime(number);
    if(retur==0)
    {
        printf("%d is not prime number\n",number);
    }
    else
    {
        printf("%d is prime number\n",number);
    }
}