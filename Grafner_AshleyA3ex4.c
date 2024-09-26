#include <stdio.h>

//Ashley Grafner
//9/11/2024
//Examples of for loops and while loops

int main() {

    // Print numbers 0 to 4 using a FOR loop
    for (int i = 0; i < 5; i++) { //counter=0, if i<5, then increment by 1 (three statements in for loops)
        printf("For loop: %d\n", i);
    }

        int i = 0;
        while (i < 5) { // Print numbers until i is less than 5, condition must start as true
            printf("While loop: %d\n", i);
            i++; //increment
        }

    return 0;
}