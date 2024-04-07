                                    // It is the eighth program of control flow
                                            // Find the factorial number
#include<stdio.h>
int main()
{
    int number, factorial, start=0;
    printf("Enter the factorial number:");
    scanf("%d",&number);
                            // for loop for increment the factoriial value
    for(factorial=1;factorial<=number;factorial++)
                        // Add the factorial value and store to start variable
    {
        start=start+factorial;
    }
    printf("Factorial of %d is %d\n",number,start);
}