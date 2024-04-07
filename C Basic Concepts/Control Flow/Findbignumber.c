                            // It is the fourth program of control flow topic
                        // Check the given three numbers which is biggest one
#include<stdio.h>
int main()
{
    int number1, number2, number3;
    printf("Enter the number:");
    scanf("%d %d %d",&number1,&number2,&number3);
                    // Check the number1 is bigger than other two numbers
    if(number1>number2&&number1<number3)
    {
        printf("%d is greater than %d and %d\n",number1,number2,number3);
    }
                    // Check the number2 is bigger than other two numbers
    else if(number2>number1&&number2>number3)
    {
        printf("%d is greater than %d and %d\n",number2,number1,number3);
    }
                    // Check the number3 is biggerr than other two numbers
    else if(number3>number1&&number3>number2)
    {
        printf("%d is greater than %d and %d\n",number3,number1,number2);
    }
            // If above all conditions are false than this part will be execute
    else
    {
        printf("All are equal\n");
    }
}