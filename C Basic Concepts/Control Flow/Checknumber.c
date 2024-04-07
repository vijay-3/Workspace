                                // It is a first program of control flow topic
                        // Check a given number is negative or equal to zero or positive.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
                    // Check a number is less than 0.
    if(number<0)
    {
        printf("%d is Negative\n",number);
    }
                    // Check a number is equal to 0.
    else if(number==0)
    {
        printf("%d is Equal to 0\n",number);
    }
                    // If above all conditions are not true then we consider given number is great than 0.
    else //if(number>0)       //Just for try.
    {
        printf("%d is Positive\n",number);
    }
}