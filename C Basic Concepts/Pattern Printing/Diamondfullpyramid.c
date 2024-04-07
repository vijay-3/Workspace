                                    // It is the fifth program of pattern printing topic
                                            // Print the Diamond pattern in numbers
#include<stdio.h>
int main()
{
    int number, run, space, star, star2;
    printf("Enter the number:");
    scanf("%d",&number);
                            // Print the first half of this pattern by using nested for loop
    for(run=1;run<=number;run++)
    {
        for(space=run;space<number;space++)
        {
            printf(" ");
        }
        for(star=1;star<=run;star++)
        {
            printf("%d ",run);
        }
        printf("\n");
    }
                            // Print the second half of this pattern by using nested for loop
    star2=number-1;
    for(run=1;run<number;run++)
    {
        for(space=1;space<=run;space++)
        {
            printf(" ");
        }
        for(star=run;star<number;star++)
        {
            printf("%d ",star2);
        }
        star2=star2-1;
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