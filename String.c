#include<stdio.h>
#include<string.h>
int main()
{
    char i[10]="Hello", n[10];
    printf("Enter a Password: ");
    scanf("%s",n);
    if(strcmp(i,n)==0)
    {
        printf("Hai Welcome :)\n");
    }
    else
    {
        printf("Oops Sorry :(\n");
    }
}