#include <stdio.h>

int main()
{
    int Tcase;
    int income = 0, Quarter = 0, Dime = 0, Nickel = 0, Penny = 0; // 0.25 : 0.1 : 0.05 : 0.01

    scanf("%d", &Tcase);

    for (int i = 0; i < Tcase; i++) {
        Quarter = 0, Dime = 0; Nickel = 0; Penny = 0;
        scanf("%d", &income);
        while (income > 0) {
            if (income >= 25) {
                Quarter = income / 25;
                income %= 25;

            }
            else if (income >= 10 && income < 25) {
                Dime = income / 10;
                income %= 10;
            }
            else if (income >= 5 && income < 10) {
                Nickel = income / 5;
                income %= 5;
            }
            else {
                Penny = income;
                income = 0;
            }
        }
        printf("%d %d %d %d", Quarter, Dime, Nickel, Penny);
        printf("\n");

    }

    return 0;
}