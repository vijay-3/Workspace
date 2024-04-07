                                // It is the first program of pattern printing topic
                                    // Print the Half right pyramid number pattern
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
                                // Print the Half pyramid pattern by using nested for loop
    for(int start=1;start<=number;start++)
    {
        for(int sequence=0;sequence<start;sequence++)
        {
            printf("%d ",start);
        }
        printf("\n");
    }
}

                            /*  1
                                2 2
                                3 3 3
                                4 4 4 4
                                5 5 5 5 5  */