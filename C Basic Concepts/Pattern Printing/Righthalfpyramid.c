                                    // It is the sixth program of pattern printing topic
                                        // Print the right half pyramid pattern
#include<stdio.h>
int main()
{
    int number, run, star;
    printf("Enter the number:");
    scanf("%d",&number);
                                    // Print the right half pyramid using by nested for loop
    for(run=1;run<=number;run++)
    {
        for(star=1;star<=run;star++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

                                    /*  *
                                        * *
                                        * * *
                                        * * * *
                                        * * * * *  */