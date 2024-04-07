                                        // It is fourth program of pattern printing topic
                                        // Print the 180 degree right pyramid pattern printing
#include<stdio.h>
int main()
{
    int number, start, sequence, start2, sequence2;
    printf("Enter the number:");
    scanf("%d",&number);
                            // Print the first half right 180 degree pyramid pattern by using nested for loop
    for(start=1;start<=number;start++)
    {
        for(sequence=1;sequence<=start;sequence++)
        {
            printf("%d ",start);
        }
        printf("\n");
    }
                        // Print the second half right inverted 180 degree pyramid pattern by using nested for loop
    start=number-1;
    for(start2=1;start2<number;start2++)
    {
        for(sequence2=number-1;sequence2>=start2;sequence2--)
        {
            printf("%d ",start);
        }
        start=start-1;
        printf("\n");
    }
}

                                    /*  1
                                        2 2
                                        3 3 3
                                        4 4 4 4
                                        5 5 5 5 5
                                        4 4 4 4
                                        3 3 3
                                        2 2
                                        1  */  