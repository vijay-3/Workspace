                                            // It is tenth program of pattern printing topic
                                        // Print the 2nd type of diamond pyramid star pattern
#include<stdio.h>
int main()
{
    int number, run, space, star;
    printf("Enter the number:");
    scanf("%d",&number);
                            // Print the first half of 2nd type of diamond pyramid by using nested for loop
    for(run=1;run<=number;run++)
    {
        for(space=run;space<number;space++)
        {
            printf(" ");
        }
        for(star=1;star<=run;star++)
        {
            printf("* ");
        }
        printf("\n");
    }
                            // Print the second half of 2nd type of diamond pyramid by using nested for loop
    for(run=1;run<=number;run++)
    {
        for(star=run;star<=number;star++)
        {
            printf("* ");
        }
        printf("\n");
        for(space=1;space<=run;space++)
        {
            printf(" ");
        }
    }
}

                                        /*  *
                                           * *
                                          * * *
                                         * * * *
                                        * * * * *
                                        * * * * *
                                         * * * *
                                          * * *
                                           * *
                                            *  */