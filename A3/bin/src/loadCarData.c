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




void loadCarData(struct car **head, char fileName[MAX_LENGTH]) {
    FILE *file = fopen(fileName, "r");
    if (!file) {
        printf("File could not be opened.\n");
        return;
    }

    char line[256]; // Assuming no line exceeds 255 characters
    while (fgets(line, sizeof(line), file)) {
        struct car *newCar = (struct car *)malloc(sizeof(struct car));
        if (!newCar) {
            printf("Memory allocation failed.\n");
            break; // Exit if we run out of memory
        }
        
        // Remove newline character from fgets
        line[strcspn(line, "\n")] = 0;
        
        // Parse the car data using strtok to handle CSV format
        char *token = strtok(line, ",");
        if (token) newCar->carId = atoi(token); // Convert string to integer for carId
        
        token = strtok(NULL, ",");
        if (token) strncpy(newCar->model, token, MAX_LENGTH);
        
        token = strtok(NULL, ",");
        if (token) strncpy(newCar->type, token, MAX_LENGTH);
        
        token = strtok(NULL, ",");
        if (token) newCar->year = atoi(token);
        
        token = strtok(NULL, ",");
        if (token) newCar->price = atof(token); // Convert string to double for price
        
        newCar->nextCar = NULL;
        
        // Add the new car to the linked list
        if (*head == NULL) {
            *head = newCar;
        } else {
            struct car *current = *head;
            while (current->nextCar != NULL) {
                current = current->nextCar;
            }
            current->nextCar = newCar;
        }
    }

    fclose(file);
    printf("Car data loaded successfully from %s.\n", fileName);
}
