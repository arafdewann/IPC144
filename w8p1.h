/*
*****************************************************************************
                          Workshop - #8 (P1)
Full Name  : MD ARAFAT KOYES
Student ID#: XXXXX
Email      : XXXX@MYSENECA.CA
Section    : XXXXX

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define MAX_PRODUCTS 3
#define GRAMS_NUMBER 64

// Structures
struct CatFoodInfo {
    int skuNumber;
    double product_Price;
    int calories;
    double product_Weight;
};

// ----------------------------------------------------------------------------
// Function Prototypes

// 1.Get int type user input and check for a positive non-zero number.    
// (give the number back and assign it to the pointer argument)
int getIntPositive(int*);

// 2. Get User input of double type and validate for a positive non-zero number
//    (assign the number to the pointer argument and return it)
double getDoublePositive(double*);

// 3. Opening Comments (mention the quantity of goods to be entered)
void openingMessage(int);

// 4. Get User input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(int);

// 5. Display the formatted table Header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(int, double*, int, double*);

// 7. Logic Entry Point using void
void start(void);
