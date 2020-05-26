// pyramid from spaces and #-s in mario's pyramid style
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int userNumber;
    printf("A number between 1 and 8 inclusive\n");

    //check if number is between 1 and 8 inclusive
    do
    {
        userNumber = get_int("Height: ");
    }
    while (userNumber < 1 || userNumber > 8);

    //printing pyramid
    for (int i = 1; i <= userNumber; i++)
    {
        for (int spaceCounter = userNumber - i; spaceCounter > 0; spaceCounter--)
        {
            printf(" ");
        }
        for (int hashCounter = i; hashCounter > 0; hashCounter--)
        {
            printf("#");
        }
        printf("\n");
    }
}