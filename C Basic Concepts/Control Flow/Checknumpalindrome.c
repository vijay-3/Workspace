                                    // It is the fifteenth program of control flow topic
                                        // Check the given number is Palindrome or not
#include<stdio.h>
int main()
{
    int number, temporary, remainder, reverse;
    printf("Enter the number:");
    scanf("%d",&number);
    temporary=number;
                                // Find the reversed the number of given number by using while loop
    while(number!=0)
    {
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
                                    // If the given number is Palindrome then print this part
    if(temporary==reverse)
    {
        printf("%d is Palindrome\n",temporary);
    }
    else
    {
        printf("%d is not a Palindrome\n",temporary);
    }
}