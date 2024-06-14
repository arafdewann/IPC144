/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  : MD Arafat Koyes
Student ID#: 133682229
Email      : makoyes@myseneca.ca
Section    : ZDD
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char loopType;
    int numIterations;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");

    do {
        printf("\nD = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &numIterations);

        if (loopType == 'D') {
            if (numIterations >= 3 && numIterations <= 20) {
                printf("DO-WHILE: ");
                int i = 0;
                do {
                    printf("D");
                    i++;
                } while (i < numIterations);
                printf("\n");
            }
            else {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
        }
        else if (loopType == 'W') {
            if (numIterations >= 3 && numIterations <= 20) {
                printf("WHILE   : ");
                int i = 0;
                while (i < numIterations) {
                    printf("W");
                    i++;
                }
                printf("\n");
            }
            else {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
        }
        else if (loopType == 'F') {
            if (numIterations >= 3 && numIterations <= 20) {
                printf("FOR     : ");
                int i;
                for (i = 0; i < numIterations; i++) {
                    printf("F");
                }
                printf("\n");
            }
            else {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
        }
        else if (loopType == 'Q') {
            if (numIterations == 0) {
                break;
            }
            else {
                printf("ERROR: To quit, the number of iterations should be 0!\n");
            }
        }
        else {
            printf("ERROR: Invalid entered value(s)!\n");
        }
    } while (1);

    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n"); // c99 standard

    return 0;
}

