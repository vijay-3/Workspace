                                // It is the tenth program of control flow topic
                                        // Create a multiplication table
#include<stdio.h>
int main()
{
    int table, start;
    printf("Enter the you wanted table:");
    scanf("%d",&table);
                                    // increment the start variable 1 to 10
    for(start=1;start<=10;start++)
    {
        printf("%d * %d = %d\n",start,table,start*table);
    }
}