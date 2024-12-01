#include <stdio.h>
#include <stdlib.h>

int main() {
    int dependants, gross_pay, tax_payable, net_pay;
    float tax_rate;

    // Get input for dependants and gross pay
    printf("Enter number of dependants: \n");
    scanf("%d", &dependants);
    printf("Enter gross pay: \n");
    scanf("%d", &gross_pay);

    // Determine tax rate and calculate tax payable
    if (gross_pay <= 10000) {
        tax_payable = 0; // No tax
    } else if (gross_pay <= 20000) {
        tax_payable = gross_pay * (dependants < 3 ? 0.15 : 0.10);
    } else {
        tax_payable = gross_pay * (dependants < 3 ? 0.35 : 0.25);
    }

    // Calculate net pay
    net_pay = gross_pay - tax_payable;

    // Output the results
    printf("Gross pay: %d\n", gross_pay);
    printf("Tax payable: %d\n", tax_payable);
    printf("Net pay: %d\n", net_pay);

    return 0;
}
