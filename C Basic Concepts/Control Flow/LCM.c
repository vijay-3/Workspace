                                // It is the twelth program of control flow topic
                                    // Check the given number is LCM or not
#include<stdio.h>
int main()
{
    int number1, number2, LCM;
    printf("Enter the number:");
    scanf("%d %d",&number1,&number2);
    LCM=(number1>number2)?number1:number2;
    while(1)
                        // If not common divisible number between two number then multiply the two number
                        // If any common divisible than that is the LCM
    {
        if(LCM%number1==0 && LCM%number2==0)
        {
            printf("LCM of %d and %d is %d",number1,number2,LCM);
            break;
        }
        LCM++;
    }
}