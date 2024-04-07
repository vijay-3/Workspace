                                // It is the seventh program of control flow topic
                                // Check the year is Leap year or Not Leap year
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
                                // Check the year is Leap year
    if(year%4==0)
    {
        printf("%d is Leap year\n",year);
    }
                        // If entered year is not a Leap year then execute the else
    else
    {
        printf("%d is Not Leap year\n",year);
    }
}