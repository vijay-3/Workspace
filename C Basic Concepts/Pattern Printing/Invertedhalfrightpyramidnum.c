                                    // It is the second program of pattern printing topic
                                    // Print the Inverted Half right pyramid number pattern
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    for(int start=number;start>0;start--)
    {
        for(int sequence=1;sequence<=start;sequence++)
        {
            printf("%d ",start);
        }
        printf("\n");
    }
}

                                        /*  5 5 5 5 5
                                            4 4 4 4
                                            3 3 3 
                                            2 2
                                            1  */