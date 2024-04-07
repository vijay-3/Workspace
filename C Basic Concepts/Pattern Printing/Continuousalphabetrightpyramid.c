                                    // It is ninth program of pattern printing toppic
                                    // Print the Continuous alphabet right pyramid pattern
#include<stdio.h>
int main()
{
    int number, run, alphabet;
    char character='A';
    printf("Enter the number:");
    scanf("%d",&number);
                                    // Print the Continuous alphabet by using nested for loop
    for(run=1;run<=number;run++)
    {
        for(alphabet=1;alphabet<=run;alphabet++)
        {
            printf("%c ",character);
            character=character+1;
        }
        printf("\n");
    }
}

                                        /*  A
                                            B C
                                            D E F
                                            G H I J
                                            K L M N O  */