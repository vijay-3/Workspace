                        // It is third program of control flow
                    // Check the given character is vowel or consonant
#include<stdio.h>
int main()
{
    char character;
    printf("Enter the Character:");
    scanf("%c",&character);
                        // Check the character is Vowel
    if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
    {
        printf("%c is Vowel\n",character);
    }
                        // Else I entered character is consider as Consonant
    else
    {
        printf("%c is Consonant\n",character);
    }
}