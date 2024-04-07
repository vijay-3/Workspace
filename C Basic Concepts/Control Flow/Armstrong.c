                               // It is the thirteenth program of control flow topic
                                    // Check the given number is Armstrong or not
#include<stdio.h>
int main()
{
    int number, temporary, result;
    printf("Enter the number:");
    scanf("%d",&number);
    temporary=number;
                            // Find the number is Armstrong or not by using while loop
    while(number>0)
    {
        int remainder=number%10;
        result=(result)+(remainder*remainder*remainder);
        number=number/10;
    }
                                    // If number is Armstrong then print this
    if(temporary==result)
    {
        printf("%d is the armstrong",temporary);
    }
                                    // If number is not Armstrong then print this
    else
    {
        printf("%d is not armstrong",temporary);
    }
}