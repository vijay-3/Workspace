                        // It is the second program of control flow
                        // Check the given number is Odd or Even
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
                    // Check the number is Even
    if(number%2==0)
    {
        printf("%d is Even\n",number);
    }
                    // Else I consider that number is Odd
    else
    {
        printf("%d is Odd\n",number);
    }
}