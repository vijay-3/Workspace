                                // It is the eight program of pattern printing topic
                                    // Print the alphabet right pyramid pattern
#include<stdio.h>
int main()
{
    int number, run, alphabet;
    char character='A';
    printf("Enter the number:");
    scanf("%d",&number);
                        // Print the alphabet right pyramid pattern using by nested for loop
    for(run=1;run<=number;run++)
    {
        for(alphabet=1;alphabet<=run;alphabet++)
        {
            printf("%c ",character);
        }
        printf("\n");
        character=character+1;
    }
}

                                        /*  A
                                            B B
                                            C C C
                                            D D D D
                                            E E E E E  */