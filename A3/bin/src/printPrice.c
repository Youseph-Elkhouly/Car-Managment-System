/*
Student Name: Youseph ElKhouly
Student ID: 1281342
Due Date: 2024-04-01
Course: CIS*2500
I have exclusive control over this submission via my password.
By including this header comment, I certify that:
1) I have read and understood the policy on academic integrity.
2) I have completed Moodle's module on academic integrity.
3) I have achieved at least 80% on the academic integrity quiz
I assert that this work is my own. I have appropriate acknowledged
any and all material that I have used, be it directly quoted or
paraphrased. Furthermore, I certify that this assignment was written
by me in its entirety.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "headerA3.h" // Assuming headerA3.h is in the current directory







void printPrice(double price) {
    // Assuming price is less than 1 billion for simplicity
    int dollars = (int)price; // Whole part
    int cents = (int)((price - dollars) * 100); // Fractional part
    int thousands = dollars / 1000;
    int remainder = dollars % 1000;

    if (thousands > 0) {
        printf("Price: $%d,%03d.%02d\n", thousands, remainder, cents);
    } else {
        printf("Price: $%d.%02d\n", dollars, cents);
    }
}
