/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  : MD ARAFAT KOYES
Student ID#: xxxx
Email      : xxxx@myseneca.ca
Section    : xxx

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;  // Tax rate
    const char patSize = 'S', salSize = 'M', tomSize = 'L';  // Sizes of shirts
    double SMALL;  // Price of a small shirt
    double MEDIUM;  // Price of a medium shirt
    double LARGE;  // Price of a large shirt
    int pnumber;  // Number of shirts Patty is buying
    int tnumber;  // Number of shirts Tommy is buying
    int snumber;  // Number of shirts Sally is buying
    int subTotalp;  // Subtotal for Patty's shirts
    int taxp;  // Tax amount for Patty's shirts
    int totalp;  // Total amount for Patty's shirts
    int subTotals, taxs, totals;  
    int subTotalt, taxt, totalt;  
    int fsubTotal, ftax, ftotal;  
    int tooniesTotal, looniesTotal, quarterTotal, dimesTotal, nickelsTotal, penniesTotal;  // Coin totals for sales excluding tax
    int remtoon, remloon, remquarter, remdime, remnickel, rempenni;  
    int avrg, fnumber, avrgwtax;  // Average values and total number of shirts sold
    int toonTotal, loonTotal, quartTotal, dimeTotal, nickTotal, penniTotal;  
    int remtoonies, remloonies, remquarters, remdimes, remnickels, rempennis;  // Remaining amounts after coin calculations

    // Set shirt prices
    printf("Set Shirt Prices");
    printf("\n================");
    printf("\nEnter the price for a SMALL shirt: $");
    scanf("%lf", &SMALL);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &MEDIUM);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &LARGE);

    // Display shirt prices
    printf("\nShirt Store Price List");
    printf("\n======================");
    printf("\nSMALL  : $%0.2lf", SMALL);
    printf("\nMEDIUM : $%0.2lf", MEDIUM);
    printf("\nLARGE  : $%0.2lf", LARGE);

    // Get the number of shirts each customer is buying
    printf("\n\nPatty's shirt size is '%c'", patSize);
    printf("\nNumber of shirts Patty is buying: ");
    scanf("%d", &pnumber);
    printf("\nTommy's shirt size is '%c'", tomSize);
    printf("\nNumber of shirts Tommy is buying: ");
    scanf("%d", &tnumber);
    printf("\nSally's shirt size is '%c'", salSize);
    printf("\nNumber of shirts Sally is buying: ");
    scanf("%d", &snumber);

    // Calculate subtotals, taxes, and totals for each customer
    subTotalp = (SMALL * 100) * pnumber;
    taxp = (subTotalp * TAX) + 0.5;
    totalp = subTotalp + taxp;
    subTotals = (MEDIUM * 100) * snumber;
    taxs = (subTotals * TAX) + 0.5;
    totals = subTotals + taxs;
    subTotalt = (LARGE * 100) * tnumber;
    taxt = (subTotalt * TAX) + 0.5;
    totalt = subTotalt + taxt;
    fsubTotal = subTotalp + subTotals + subTotalt;
    ftax = taxp + taxs + taxt;
    ftotal = totalp + totals + totalt;

    // Display the customer and order details
    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total");
    printf("\n-------- ---- ----- --- --------- --------- ---------");
    printf("\nPatty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf", patSize, SMALL, pnumber, (double)subTotalp / 100, (double)taxp / 100, (double)totalp / 100);
    printf("\nSally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf", salSize, MEDIUM, snumber, (double)subTotals / 100, (double)taxs / 100, (double)totals / 100);
    printf("\nTommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf", tomSize, LARGE, tnumber, (double)subTotalt / 100, (double)taxt / 100, (double)totalt / 100);
    printf("\n-------- ---- ----- --- --------- --------- ---------");
    printf("\n%33.4lf %9.4lf %9.4lf", (double)fsubTotal / 100, (double)ftax / 100, (double)ftotal / 100);

    // Calculate coin totals for sales excluding tax
    tooniesTotal = fsubTotal / 2;
    remtoon = fsubTotal % 200;
    looniesTotal = remtoon / 1;
    remloon = remtoon % 100;
    quarterTotal = remloon / 0.25;
    remquarter = remloon % 25;
    dimesTotal = remquarter / 0.10;
    remdime = remquarter % 10;
    nickelsTotal = remdime / 0.50;
    remnickel = remdime % 05;
    penniesTotal = remnickel / 0.01;
    rempenni = remnickel % 1;

    // Calculate average cost per shirt and total number of shirts sold
    fnumber = pnumber + tnumber + snumber;
    avrg = (fsubTotal * 1000) / fnumber + 0.5;

    // Display coin totals for sales excluding tax
    printf("\n\nDaily retail sales represented by coins");
    printf("\n=======================================");
    printf("\n\nSales EXCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n%22.4lf", (double)fsubTotal / 100);
    printf("\nToonies  %3d %9.4lf", tooniesTotal / 100, (double)remtoon / 100);
    printf("\nLoonies  %3d %9.4lf", looniesTotal / 100, (double)remloon / 100);
    printf("\nQuarters %3d %9.4lf", quarterTotal / 100, (double)remquarter / 100);
    printf("\nDimes    %3d %9.4lf", dimesTotal / 100, (double)remdime / 100);
    printf("\nNickels  %3d %9.4lf", nickelsTotal / 100, (double)remnickel / 100);
    printf("\nPennies  %3d %9.4lf", penniesTotal / 100, (double)rempenni / 100);

    // Display average cost per shirt
    printf("\n\nAverage cost/shirt: $%2.4lf", (double)avrg / 100000);

    // Calculate coin totals for sales including tax
    toonTotal = ftotal / 2;
    remtoonies = ftotal % 200;
    loonTotal = remtoonies / 1;
    remloonies = remtoonies % 100;
    quartTotal = remloonies / 0.25;
    remquarters = remloonies % 25;
    dimeTotal = remquarters / 0.10;
    remdimes = remquarters % 10;
    nickTotal = remdimes / 0.05;
    remnickels = remdimes % 05;
    penniTotal = remnickels / 0.01;
    rempennis = remnickels % 1;
    avrgwtax = (ftotal * 1000) / fnumber + 0.5;

    // Display coin totals for sales including tax
    printf("\n\nSales INCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n%22.4lf", (double)ftotal / 100);
    printf("\nToonies  %3d %9.4lf", toonTotal / 100, (double)remtoonies / 100);
    printf("\nLoonies  %3d %9.4lf", loonTotal / 100, (double)remloonies / 100);
    printf("\nQuarters %3d %9.4lf", quartTotal / 100, (double)remquarters / 100);
    printf("\nDimes    %3d %9.4lf", dimeTotal / 100, (double)remdimes / 100);
    printf("\nNickels  %3d %9.4lf", nickTotal / 100, (double)remnickels / 100);
    printf("\nPennies  %3d %9.4lf", penniTotal / 100, (double)rempennis / 100);

    // Display average cost per shirt including tax
    printf("\n\nAverage cost/shirt: $%2.4lf", (double)avrgwtax / 100000);
    printf("\n");

    return 0;
}
