// program for calculating how much is minimum coins from user input
// using greedy algorithm

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    // initializing variables
    float owedSum = 0.0;
    do
    {
        owedSum = get_float("How much is owed?\n");
    } while (owedSum <= 0.0);

    int coinsOwed = round(owedSum * 100);
    int coinsCounter = 0;

    int coinsWeCanGive = 0;

    // starting greedy algorithm
    do
    {
        if ((coinsOwed / 50) > 0)
        {
            // we can give some rest in 50's coin
            // how much 50's coins can we give?
            coinsWeCanGive = coinsOwed - (coinsOwed % 50);
            coinsCounter += coinsWeCanGive / 50;
            coinsOwed -= coinsWeCanGive;
        } else
        {
            // we can't give any rest in 50's coin
            if ((coinsOwed / 25) > 0)
            {
                // we can give some rest in 25's coin
                // how much 25's coins can we give?
                coinsWeCanGive = coinsOwed - (coinsOwed % 25);
                coinsCounter += coinsWeCanGive / 25;
                coinsOwed -= coinsWeCanGive;
            } else
            {
                // we can't give any rest in 25's coin
                if ((coinsOwed / 10) > 0)
                {
                    // we can give some rest in 10's coin
                    // how much 10's coins can we give?
                    coinsWeCanGive = coinsOwed - (coinsOwed % 10);
                    coinsCounter += coinsWeCanGive / 10;
                    coinsOwed -= coinsWeCanGive;
                } else
                {
                    // we can't give any rest in 10's coin
                    if ((coinsOwed / 5) > 0)
                    {
                        // we can give some rest in 5's coin
                        // how much 5's coins can we give?
                        coinsWeCanGive = coinsOwed - (coinsOwed % 5);
                        coinsCounter += coinsWeCanGive / 5;
                        coinsOwed -= coinsWeCanGive;
                    } else
                    {
                        // we can't give any rest in 5's coin
                        coinsCounter += coinsOwed;
                        coinsOwed = 0;
                    }
                }
            }
        }
    } while (coinsOwed > 0);

    // output
    printf("Here is how much minimum coins we should give to the customer:\n");
    printf("%i\n", coinsCounter);
}