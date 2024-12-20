#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dime(int cents);
int calculate_nickel(int cents);
int calculate_penny(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    printf("Change owed: ");
    scanf("%d", &cents);
    
    int total_coins = 0;
    
    if (cents >= 25) {
        int quarters = calculate_quarters(cents);
        total_coins += quarters;
        cents = cents - (quarters * 25);
    }
    
    if (cents >= 10) {
        int dimes = calculate_dime(cents);
        total_coins += dimes;
        cents = cents - (dimes * 10);
    }

    if (cents >= 5) {
        int nickels = calculate_nickel(cents);
        total_coins += nickels;
        cents = cents - (nickels * 5);
    }

    if (cents >= 1) {
        int pennies = calculate_penny(cents);
        total_coins += pennies;
        cents = cents - pennies;
    }
    
    printf("%i\n", total_coins);
    return 0;
}

int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_dime(int cents)
{
    // Calculate how many dimes you should give customer
    int dime = 0;
    while (cents >= 10)
    {
        dime++;
        cents = cents - 10;
    }
    return dime;
}

int calculate_nickel(int cents)
{
    // Calculate how many nickels you should give customer
    int nickel = 0;
    while (cents >= 5)
    {
        nickel++;
        cents = cents - 5;
    }
    return nickel;
}

int calculate_penny(int cents)
{
    // Calculate how many pennies you should give customer
    int penny = 0;
    while (cents >= 1)
    {
        penny++;
        cents = cents - 1;
    }
    return penny;
}