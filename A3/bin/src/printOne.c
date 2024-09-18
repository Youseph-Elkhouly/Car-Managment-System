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










void printOne(struct car *head, int position) {
    struct car *current = head;
    int count = 1;  // Start counting positions from 1

    // Traverse the list until the desired position
    while (current != NULL && count < position) {
        current = current->nextCar;
        count++;
    }

    // Check if the current car is the one we're looking for
    if (current != NULL && count == position) {
        printf("\nCar at position %d:\n", position);
        printf("Car id: %d\n", current->carId);
        printf("Model: %s\n", current->model);
        printf("Type: %s\n", current->type);
        printPrice(current->price);  // Use the printPrice function to print formatted price
        printf("Year of Manufacture: %d\n", current->year);
    } else {
        // If we've reached the end of the list without finding the position
        printf("Car at position %d not found.\n", position);
    }
}
