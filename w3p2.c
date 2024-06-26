/*****************************************************************************
 <assessment name example : Workshop - #3 (Part - 2)>
Full Name   : MD ARAFAT KOYES
Student ID# : XXXXX
Email       : XXXX@myseneca.ca
Section     :XXX

Authenticity Declaration :
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider.This submitted
piece of work is entirely of my own creation.
* ****************************************************************************/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    char type1, type2, type3, type11, type12, cream1, cream2, cream3, cream11, cream12;
    int bw1, bw2, bw3, serving1, serving2;

    //int 
    //double 

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n");
    printf("\n");
    printf("Enter the coffee product information being sold today...\n");
    printf("\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &type1);
    printf("Bag weight (g): ");
    scanf(" %d", &bw1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream1);
    printf("\n");
    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &type2);
    printf("Bag weight (g): ");
    scanf(" %d", &bw2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream2);
    printf("\n");
    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &type3);
    printf("Bag weight (g): ");
    scanf(" %d", &bw3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf("  %c", &cream3);
    printf("\n");


    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", type1 == 'l' || type1 == 'L', type1 == 'm' || type1 == 'M', type1 == 'r' || type1 == 'R', bw1, bw1 / GRAMS_IN_LBS, cream1 == 'y' || cream1 == 'Y');
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", type2 == 'l' || type2 == 'L', type2 == 'm' || type2 == 'M', type2 == 'r' || type2 == 'R', bw2, bw2 / GRAMS_IN_LBS, cream2 == 'y' || cream2 == 'Y');
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", type3 == 'l' || type3 == 'L', type3 == 'm' || type3 == 'M', type3 == 'r' || type3 == 'R', bw3, bw3 / GRAMS_IN_LBS, cream3 == 'y' || cream3 == 'Y');
    printf("\n");
    printf("Enter how you like your coffee...\n");
    printf("\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &type11);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream11);
    printf("Typical number of daily servings: ");
    scanf(" %d", &serving1);
    printf("\n");
    printf("The below table shows how your preferences align to the available products:\n");
    printf("\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", (type11 == 'l' || type11 == 'L') && (type1 == 'l' || type1 == 'L'), (serving1 > 0) && (serving1 <= 4), (cream11 == 'y' || cream11 == 'Y') && (cream1 == 'y' || cream1 == 'Y'));
    printf(" 2|       %d         |      %d      |   %d   |\n", (type11 == 'r' || type11 == 'R') && (type2 == 'r' || type2 == 'R'), (serving1 >= 5) && (serving1 <= 9), (cream11 == 'n' || cream11 == 'N') && (cream2 == 'n' || cream2 == 'N'));
    printf(" 3|       %d         |      %d      |   %d   |\n", (type11 == 'm' || type11 == 'M') && (type3 == 'm' || type3 == 'M'), serving1 >= 10, (cream11 == 'n' || cream11 == 'N') && (cream3 == 'n' || cream3 == 'N'));
    printf("\n");
    printf("Enter how you like your coffee...\n");
    printf("\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &type12);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream12);
    printf("Typical number of daily servings: ");
    scanf(" %d", &serving2);
    printf("\n");
    printf("The below table shows how your preferences align to the available products:\n");
    printf("\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", (type12 == 'l' || type12 == 'L') && (type1 == 'l' || type1 == 'L'), (serving2 > 0) && (serving2 <= 4), (cream12 == 'y' || cream12 == 'Y') && (cream1 == 'y' || cream1 == 'Y'));
    printf(" 2|       %d         |      %d      |   %d   |\n", (type12 == 'r' || type12 == 'R') && (type2 == 'r' || type2 == 'R'), (serving2 >= 5) && (serving2 <= 9), (cream12 == 'n' || cream12 == 'N') && (cream2 == 'n' || cream2 == 'N'));
    printf(" 3|       %d         |      %d      |   %d   |\n", (type12 == 'm' || type12 == 'M') && (type3 == 'm' || type3 == 'M'), serving2 >= 10, (cream12 == 'n' || cream12 == 'N') && (cream3 == 'n' || cream3 == 'N'));
    printf("\n");
    printf("Hope you found a product that suits your likes!\n");
    printf("\n");
    return 0;
}


/*
Provided formatting parts for printf statements:
As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",
*/
