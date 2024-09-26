//Ashley Grafner
//9/11/2024
//Example of using continue/break statements
#include <stdio.h>

int main() {
    // Example of break
    printf("Using break:\n");
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            break; // Exit the loop when i is 3
        }
        printf("%d ", i); // Output: 0 1 2
    }

    printf("\n\nUsing continue:\n");

    // Example of continue
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            continue; // Skip the rest of the code when i is 3 and move to the next iteration
        }
        printf("%d ", i); // Output: 0 1 2 4
    }

    return 0;
}

