                                    // It is the forteenth program of control flow topic
                                        // Display the given number's reversed result
#include<stdio.h>
int main()
{
    int number, reverse, temporary, remainder;
    printf("Enter the number:");
    scanf("%d",&number);
    temporary=number;
                                    // Reverse the given number by using while
    while(number!=0)
    {
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
    printf("%d reversed number is:%d\n", temporary, reverse);
}