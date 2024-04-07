                                        // It is eleventh program of pattern printing topic
                                        // Print the right floyd pyramid pattern of number
#include<stdio.h>
int main()
{
    int number, run, row, num=1;
    printf("Enter the number:");
    scanf("%d",&number);
                                    // Print the right floyd pyramid pattern by using nested for loop
    for(run=1;run<=number;run++)
    {
        for(row=1;row<=run;row++)
        {
            printf("%d ",num);
            num=num+1;
        }
        printf("\n");
    }
}

                                        /*  1
                                            2 3
                                            4 5 6
                                            7 8 9 10
                                            11 12 13 14  */