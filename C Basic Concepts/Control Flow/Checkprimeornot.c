                                    // It is the sixteenth program of control flow topic
                                        // Check the given number is Prime or not
#include<stdio.h>
int main()
{
    int number, start, isprime=0;
    printf("Enter the number:");
    scanf("%d",&number);
                                    // Check the given number is prime or not by using for loop
    for(start=2;start<number;start++)
    {
        if(number%start==0)
        {
            isprime=1;
            break;
        }
    }
    if(isprime==0)
    {
        printf("%d is a Prime number\n",number);
    }
    else
    {
        printf("%d is not a Prime number\n",number);
    }
}