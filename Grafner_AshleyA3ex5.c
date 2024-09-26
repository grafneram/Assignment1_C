//Ashley Grafner
//9/11/2024
/*Takes input of temp in Fahrenheit, then Iterate from 0 to user input by incrementing by 5 degrees
/Convert F to C and display in a table format
*/

#include <stdio.h>

int main() {
    int maxFahrenheit; //initialize maxFahrenheit

    // Takes input from the user
    printf("Enter the maximum temperature in degree Fahrenheits: ");
    scanf("%d", &maxFahrenheit); //stores user input

    // Display the table header
    printf("_____________________________________________\n");
    printf("| degree Fahrenheits | degree Celsius      |\n");
    printf("_____________________________________________\n");

    // Iterating 0 to maxFahrenheit by incrementing by 5 degrees F
    for (int i = 0; i <= maxFahrenheit; i += 5) {
        // Converts F to C in the for loop
        double celsius = (i - 32) * 5.0 / 9.0;


        // Print the Fahrenheit and Celsius values in a table row.
        // %-18d: Left-aligns the Fahrenheit value in a field of 18 characters.
        // %-19.2f: Left-aligns the Celsius value in a field of 19 characters, with 2 decimal places.
        printf("| %-18d | %-19.2f |\n", i, celsius);
        printf("______________________________________________\n"); //formating for bottom of table
    }
    return 0;
}