                                    // It is the twelth program of pattern printing topic
                                // Print the inverted right floyd pyramid pattern of number
#include<stdio.h>
int main()
{
    int number,run, print, num;
    printf("Enter the number:");
    scanf("%d",&number);
                    // Print the inverted right floyd pyramid pattern of number by using nested for loop
    num=number*(number+1)/2;
    for(run=1;run<=number;run++)
    {
        for(print=run;print<=number;print++)
        {
            printf("%d ",num);
            num=num-1;
        }
        printf("\n");
    }
}

                                    /*  15 14 13 12 11
                                        10 9 8 7
                                        6 5 4
                                        3 2
                                        1  */