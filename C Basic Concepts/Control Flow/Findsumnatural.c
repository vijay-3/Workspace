                        // It is the fifth program of control flow
                            // Find the sum of natural numbers
#include<stdio.h>
int main()
{
    int n, i, j=0;
    printf("Enter you need sizeof natural number:");
    scanf("%d",&n);
                    // Using the for loop to increment the i value and add to the j
    for(i=0;i<=n;i++)
    {
        j=j+i;
    }
                                    // Than print the final value
        printf("%d  ",j);
}