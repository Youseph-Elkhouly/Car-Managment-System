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





void printAll(struct car *head) {
    struct car *current = head;
    int index = 1;

    if (current == NULL) {
        printf("No cars found.\n");
        return;
    }

    while (current != NULL) {
        printf("\nCar # %d:\n", index++);
        printf("Car id: %d\n", current->carId);
        printf("Model: %s\n", current->model);
        printf("Type: %s\n", current->type);

        // Call a separate function to format and print the price
        printPrice(current->price);

        printf("Year of Manufacture: %d\n", current->year);
        current = current->nextCar;
    }
}
