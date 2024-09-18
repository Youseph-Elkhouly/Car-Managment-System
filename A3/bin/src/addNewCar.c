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




void addNewCar(struct car **head) {
    struct car *newCar = (struct car *)malloc(sizeof(struct car));
    if (newCar == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Clear input buffer to ensure clean reading for car model
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { /* discard */ }

    printf("Enter the car model: ");
    fgets(newCar->model, MAX_LENGTH, stdin);
    newCar->model[strcspn(newCar->model, "\n")] = 0; // Remove newline at the end

    printf("Enter the car type: ");
    fgets(newCar->type, MAX_LENGTH, stdin);
    newCar->type[strcspn(newCar->type, "\n")] = 0; // Remove newline at the end

    printf("Enter its year of manufacture: ");
    scanf("%d", &newCar->year);
    // Clear the input buffer after scanf
    while ((c = getchar()) != '\n' && c != EOF) { /* discard */ }

    printf("Enter its price: ");
    scanf("%lf", &newCar->price);
    // Clear the input buffer after scanf
    while ((c = getchar()) != '\n' && c != EOF) { /* discard */ }

    // Placeholder for unique ID generation - replace with your actual logic
    newCar->carId = rand() % 1000 + 1;

    newCar->nextCar = NULL;

    // Append the new car to the linked list
    if (*head == NULL) {
        *head = newCar;
    } else {
        struct car *current = *head;
        while (current->nextCar != NULL) {
            current = current->nextCar;
        }
        current->nextCar = newCar;
    }

    printf("New car added with ID %d.\n", newCar->carId);
}
