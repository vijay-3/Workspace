#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//Define responses
char *responses[][3]={
    {"hi","Hello!","Hi there!","Hey!"},
    {"how are you","I'm good, thank you!","Feeling great!","I'm doing well."},
    {"bye","Goodbye","See you later!","Bye"},
    //Add more patterns and responses as needed
};

//Function to generate a random response
char *generate_response(char *input)
{
    for (int i = 0; i < sizeof(responses) / sizeof(responses[0]); i++)
    {
        if (strcmp(input, responses[i][0]) == 0)
        {
            int num_responses = sizeof(responses[i]) / sizeof(responses[i][0]) - 1;
            int rand_index =rand() % num_responses + 1;
            return responses[i][rand_index];
        }
    }
    return "I'm not sure what you mean.";
}
int main()
{
    srand(time(NULL));  //Send the random number generator
    char user_input[100];
    printf("You: ");
    fgets(user_input, sizeof(user_input), stdin);
    while (strcmp(user_input,"quit\n") != 0)
    {
        printf("AI: %s\n", generate_response(user_input));
        printf("You: ");
        fgets(user_input,sizeof(user_input), stdin);
    }
    printf("Goodbye\n");
    return 0;
}