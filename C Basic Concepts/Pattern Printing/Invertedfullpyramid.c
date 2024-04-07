                                        // It is the seventh program of pattern printing topic
                                            // Print the Inverted full pyramid pattern
#include<stdio.h>
int main()
{
    int number, run, star, space;
    printf("Enter the number:");
    scanf("%d",&number);
                                // Print the inverted full pattern pyramid by using nested for loop
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

                                            /*  * * * * *
                                                 * * * *
                                                  * * *
                                                   * *
                                                    *  */