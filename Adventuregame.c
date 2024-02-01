#include <stdio.h>
#include <string.h>

// Define a structure for representing a location in the game world
typedef struct {
    char name[50];
    char description[200];
} Location;

// Define the game world as an array of Location structures
Location locations[] = {
    {"Town", "You are in a bustling town with shops and people."},
    {"Forest", "You find yourself in a dense forest with tall trees and chirping birds."},
    {"Cave", "You enter a dark cave with mysterious echoes."},
    // Add more locations as needed
};

// Function to display the description of the current location
void displayLocation(int currentLocation) {
    printf("Current location: %s\n", locations[currentLocation].name);
    printf("%s\n", locations[currentLocation].description);
}

int main() {
    int currentLocation = 0; // Start the player in the town

    // Game loop
    while (1) {
        displayLocation(currentLocation);

        // Prompt the player for input
        printf("Where do you want to go? (Enter 'town', 'forest', or 'cave', or 'quit' to exit): ");
        
        char input[20];
        scanf("%s", input);

        // Process the player's input
        if (strcmp(input, "quit") == 0) {
            printf("Exiting the game. Goodbye!\n");
            break;
        } else if (strcmp(input, "town") == 0) {
            currentLocation = 0; // Move to the town
        } else if (strcmp(input, "forest") == 0) {
            currentLocation = 1; // Move to the forest
        } else if (strcmp(input, "cave") == 0) {
            currentLocation = 2; // Move to the cave
        } else {
            printf("Invalid input. Please try again.\n");
        }
    }

    return 0;
}
