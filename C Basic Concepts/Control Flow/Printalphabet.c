                            // It ia a sixth program of control flow topic
                                // Program for print the alphabet
#include<stdio.h>
int main()
{
    char alphabet;
                            // Print a alphabet 'a' to 'z' used by for loop
    for(alphabet='a';alphabet<='z';alphabet++)
    {
        printf("%c ",alphabet);
    }
    printf("\n");
                            // Print a hyphen for separate a first for loop and third for loop
    for(alphabet=1;alphabet<=26;alphabet++)
    {
        printf("--");
    }
    printf("\n");
                            // Print a alphabet 'A' to 'Z' used by for loop
    for(alphabet='A';alphabet<='Z';alphabet++)
    {
        printf("%c ",alphabet);
    }
    printf("\n");
}