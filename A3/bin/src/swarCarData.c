
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




void swapCarData(struct car *a, struct car *b) {
    // Swap all the data except the carId
    int tempYear = a->year;
    double tempPrice = a->price;
    char tempModel[MAX_LENGTH];
    char tempType[MAX_LENGTH];
    
    // Copy model and type
    strcpy(tempModel, a->model);
    strcpy(tempType, a->type);

    // Swap the data
    a->year = b->year;
    b->year = tempYear;
    a->price = b->price;
    b->price = tempPrice;
    strcpy(a->model, b->model);
    strcpy(b->model, tempModel);
    strcpy(a->type, b->type);
    strcpy(b->type, tempType);
}
