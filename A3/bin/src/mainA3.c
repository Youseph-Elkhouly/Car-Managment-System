#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "headerA3.h" // Assuming headerA3.h is in the current directory

// Helper function prototypes (if needed)
// Example: int generateCarId(char *model, char *type);

int main() {
    a3Car *head = NULL;
    char fileName[MAX_LENGTH];
    int menuChoice = 0;
    int carId, whichOne;
    char key[100];
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Add data on a new car\n");
        printf("2. Load data on cars from a given text file\n");
        printf("3. Print data of all cars\n");
        printf("4. Print data of the nth car\n");
        printf("5. Search car data based on carId\n");
        printf("6. Search car data based on model and type\n");
        printf("7. Count the total number of cars in the list\n");
        printf("8. Sort the cars in the list based on carId\n");
        printf("9. Remove data of the nth car\n");
        printf("10. Remove all car data\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &menuChoice);

        switch (menuChoice) {
            case 1:
                addNewCar(&head);
                break;
            case 2:
                printf("Enter filename: ");
                scanf("%s", fileName);
                loadCarData(&head, fileName);
                break;
            case 3:
                printAll(head);
                break;
            case 4: {
                int pos;
                printf("Enter car position: ");
                scanf("%d", &pos);
                // Consume the leftover '\n' from the buffer
                while (getchar() != '\n');
                printOne(head, pos);
                break;
            }           
            case 5: {
                int idToFind;
                printf("Enter car ID to search: ");
                scanf("%d", &idToFind);
                // Consume the leftover '\n' from the buffer
                while (getchar() != '\n');

                // Find the position of the car with the given ID
                int position = lookForCarId(head, idToFind);

                if (position != -1) {
                // If the car is found, print its details using the position
                    printOne(head, position);
                } else {
                    printf("Car with ID %d not found.\n", idToFind);
                }
                break;
            }

            case 6: {
                char modelAndType[100];

                // Clear the input buffer before reading the new line
                int c;
                while ((c = getchar()) != '\n' && c != EOF) { /* discard */ }

                printf("Enter car model and type: ");
                if (fgets(modelAndType, sizeof(modelAndType), stdin) == NULL) {
                    printf("Error reading input.\n");
                    break;
                }
                // Remove the newline character at the end of the input
                modelAndType[strcspn(modelAndType, "\n")] = 0;

                int position = lookForCarModelType(head, modelAndType);
                if (position != -1) {
                    printf("Car model and type found at position %d.\n", position);
                    // Optionally, you can then print the details of the car found
                    printOne(head, position);
                } else {
                    printf("Car model and type not found.\n");
                }
                break;
            }


            case 7:
                printf("Total number of cars: %d\n", countCars(head));
                break;
            case 8:
                sortCarId(&head);
                break;
            case 9:
                printf("Enter car position to remove: ");
                scanf("%d", &whichOne);
                oneLessCar(&head, whichOne);
                break;
            case 10:
                noMoreCars(&head);
                break;
            case 11:
                printf("Exiting program.\n");
                noMoreCars(&head); // Free all nodes before exiting
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0; // This line may never be reached due to the loop, but it's good practice.
}
