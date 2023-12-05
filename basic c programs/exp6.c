#include <stdio.h>

int main() {
    int customerNumber, powerConsumed;
    float amountToPay;

    printf("Enter customer number: ");
    scanf("%d", &customerNumber);

    printf("Enter power consumed (in units): ");
    scanf("%d", &powerConsumed);

    if (powerConsumed <= 200) {
        amountToPay = powerConsumed * 0.50;
    } else {
        if (powerConsumed <= 400) {
            amountToPay = 100 + (powerConsumed - 200) * 0.65;
        } else {
            if (powerConsumed <= 600) {
                amountToPay = 230 + (powerConsumed - 400) * 0.80;
            } else {
                amountToPay = 390 + (powerConsumed - 600) * 1.00;
            }
        }
    }

    printf("Customer Number: %d\n", customerNumber);
    printf("Amount to Pay: Rs. %.2f\n", amountToPay);

    return 0;
}

