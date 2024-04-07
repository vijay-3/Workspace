                                    // It is the ninth program of contol flow
                                    // Create a simple calculator program
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float number1, number2, result;
    char operator;
    printf("Enter your calculation operation:\n");
    printf("'+' , '-' , '*' , '/' , '%%'\n");
    scanf("%c",&operator);
    printf("Enter the number to calculate:");
    scanf("%f%f",&number1, &number2);
    switch(operator)
    {
                            // Addition
        case '+':
        {
            result=number1+number2;
            break;
        }
                            // Subtraction
        case '-':
        {
            result=number1-number2;
            break;
        }
                            // Multiplication
        case '*':
        {
            result=number1*number2;
            break;
        }
                            // Division
        case '/':
        {
            result=number1/number2;
            break;
        }
                            // Modulo
        case '%':
        {
            result=(int)number1%(int)number2;
            break;
        }
                            // If all of the above false then this part is execute
        default:
        {
            exit;
        }
        
    }
    if(result-(int)result==0)
    {
        printf("%.0f",result);
    }
    else
    {
        printf("%.2f",result);
    }
}