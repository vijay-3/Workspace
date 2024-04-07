                                    // It is the eleventh program of control flow topic
                                            // Find the Fibonacci series number
#include<stdio.h>
int main()
{
    int number, start, initial=0, sequence=1,continueous;
    printf("Enter the number for fibonacci:");
    scanf("%d",&number);
    printf("%d %d ",initial,sequence);
                                    // for loop increment the 'start' variable until the less than two user entered number
    for(start=1;start<=number-2;start++)
    {
        continueous=initial+sequence;
        initial=sequence;
        sequence=continueous;
        printf("%d ",continueous);
    }
}