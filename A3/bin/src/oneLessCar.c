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



void oneLessCar(struct car **head, int whichOne) {
    // If the list is empty or position is invalid
    if (*head == NULL || whichOne <= 0) return;

    struct car *temp = *head, *prev;
    
    // If car to be deleted is the head node
    if (whichOne == 1) {
        *head = temp->nextCar; // Changed head
        free(temp); // Free old head
        return;
    }

    // Find previous node of the node to be deleted
    for (int i = 1; temp != NULL && i < whichOne; i++) {
        prev = temp;
        temp = temp->nextCar;
    }

    // If position is more than the number of nodes
    if (temp == NULL) return;

    // Unlink the node from the linked list
    prev->nextCar = temp->nextCar;

    free(temp); // Free memory
}
