//Ashley Grafner
//9/11/2024
//Example using do-While and while loops

#include <stdio.h>
int main() {
    int i = 0; //starts at 0

    do { //will always execute first
        printf("Do While loop: %d\n", i);
        i++; //increment
    }
    while (i <= 3); //runs while i <= 3

    int i = 0; //starts at 0

    while (i <= 3) { //runs ONLY IF i <= 3
        printf("While loop:%d\n", i);
        i++; //increment
    }


    return 0;
}
