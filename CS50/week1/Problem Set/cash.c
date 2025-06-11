#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int change;
    do
    {
        change = get_int("Change owed ");
    }
    while(change<0);

    int quarters;

        quarters = change/25;change-=quarters*25;

        int dimes;
        dimes = change/10;change -=dimes*10;

            int nickels;
                nickels = change/5; change-=nickels*5;

                    int pennies;
                        pennies = change;
printf("%i\n", quarters+dimes+nickels+pennies);
}
