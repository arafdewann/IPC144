/*          (Workshop 2 Part-1) */
/* 
Full Name   : MD ARAFAT KOYES
Student ID# : xxxxx
Email       : xxxxx@myseneca.ca
Section     :  xxx
 
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*/
#include <stdio.h>

int main(void) {
    float smallShirtPrice, mediumShirtPrice, largeShirtPrice;
    int numPattyShirts, numTommyShirts, numSallyShirts;

    // Set shirt prices
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f", &smallShirtPrice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f", &mediumShirtPrice);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f", &largeShirtPrice);

    // Display shirt price list
    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n", smallShirtPrice);
    printf("MEDIUM : $%.2f\n", mediumShirtPrice);
    printf("LARGE  : $%.2f\n", largeShirtPrice);

    // Get Patty's order details
    printf("\nPatty's shirt size is 'S'\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numPattyShirts);

    // Get Tommy's order details
    printf("\nTommy's shirt size is 'L'\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numTommyShirts);

    // Get Sally's order details
    printf("\nPatty's shirt size is 'M'\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numSallyShirts);

    // Calculate the subtotal for each customer
    float patty_subtotal = smallShirtPrice * numPattyShirts;
    float tommy_subtotal = largeShirtPrice * numTommyShirts;
    float sally_subtotal = mediumShirtPrice * numSallyShirts;

    // Calculate the tax for each customer
    float tax_rate = 0.13;
    float patty_tax = patty_subtotal * tax_rate;
    float tommy_tax = tommy_subtotal * tax_rate;
    float sally_tax = sally_subtotal * tax_rate;

    // Calculate the total sales and total tax
    float total_sales = patty_subtotal + tommy_subtotal + sally_subtotal;
    float total_tax = patty_tax + tommy_tax + sally_tax;
    float total_amount = total_sales + total_tax;

    // Display the sales information
    printf("Customer\tSize\tPrice\tQty\tSub-Total\tTax\tTotal\n");
    printf("--------\t----\t-----\t---\t---------\t-----\t-----\n");
    printf("Patty\t\t%c\t%.2f\t%d\t%.4f\t%.4f\t%.4f\n", patty_size, small_price, patty_qty, patty_subtotal, patty_tax, patty_subtotal + patty_tax);
    printf("Sally\t\t%c\t%.2f\t%d\t%.4f\t%.4f\t%.4f\n", sally_size, medium_price, sally_qty, sally_subtotal, sally_tax, sally_subtotal + sally_tax);
    printf("Tommy\t\t%c\t%.2f\t%d\t%.4f\t%.4f\t%.4f\n", tommy_size, large_price, tommy_qty, tommy_subtotal, tommy_tax, tommy_subtotal + tommy_tax);
    printf("--------\t----\t-----\t---\t---------\t-----\t-----\n");
    printf("\t\t\t\t\t%.4f\t%.4f\t%.4\n");

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n");


   // Total sales amount
     double total_sales = 365.57; 


   // Define the values of each coin denomination
        double toonie = 2.00;
        double loonie = 1.00;
        double quarter = 0.25;
        double dime = 0.10;
        double nickel = 0.05;
        double penny = 0.01;

   // Calculate the number of coins for each denomination
        int num_toonies = total_sales / toonie;
        total_sales -= num_toonies * toonie;

        int num_loonies = total_sales / loonie;
        total_sales -= num_loonies * loonie;

        int num_quarters = total_sales / quarter;
        total_sales -= num_quarters * quarter;

        int num_dimes = total_sales / dime;
        total_sales -= num_dimes * dime;

        int num_nickels = total_sales / nickel;
        total_sales -= num_nickels * nickel;

        int num_pennies = total_sales / penny;
        total_sales -= num_pennies * penny;

    // Display the breakdown of sales by coin denominations
        printf("Daily retail sales represented by coins\n");
        printf("=======================================\n");
        printf("Coin\t\tQty\n");
        printf("--------\t---\n");
        printf("Toonies\t\t%d\n", num_toonies);
        printf("Loonies\t\t%d\n", num_loonies);
        printf("Quarters\t%d\n", num_quarters);
        printf("Dimes\t\t%d\n", num_dimes);
        printf("Nickels\t\t%d\n", num_nickels);
        printf("Pennies\t\t%d\n", num_pennies);
        printf("\n");
        float total_sales = patty_subtotal + tommy_subtotal + sally_subtotal;
        float total_Quantity = numPattyShirts+numTommyShirts+numSallyShirts
        printf("Average cost/shirt: total_sales / total_Quantity ")

        printf("\n")
        printf("Sales EXCLUDING tax\n");
        printf("Coin\t\tQty\tBalance\n");
        printf("--------\t---\t---------\n");

        // Calculate and display the breakdown of sales excluding tax
        double balance = total_sales;
        int num_toonies = balance / 2;
        balance -= num_toonies * 2;
        printf("Toonies\t\t%d\t%.4lf\n", num_toonies, balance);
        printf("Average cost/shirt: total_sales / total_Quantity ")



   return 0;
}
