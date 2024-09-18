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




int lookForCarModelType(struct car *head, char key[100]) {
    struct car *current = head;
    int position = 1;
    char modelType[2 * MAX_LENGTH]; // Make sure this size is sufficient for your strings
    
    while (current != NULL) {
        // Clear the modelType buffer before use
        memset(modelType, 0, sizeof(modelType));

        // Concatenate model and type with a space in between
        snprintf(modelType, sizeof(modelType), "%s %s", current->model, current->type);

        // Check if the concatenated model and type match the key
        if (strcmp(modelType, key) == 0) {
            return position; // Found a match
        }

        // Move to the next car in the list
        current = current->nextCar;
        position++;
    }

    return -1; // No match found
}
