#include <stdio.h>
#include <stdbool.h>

//Ashley Grafner
//9/11/2024
//Final code from last assignment, had already removed go-tos already
//This version includes the country option to be added, make a few small changes with nationality

void main() {
    int rec_num,salary;
    char name[100];     // Employee name
    char gender;        // Employee gender (F for Female, M for Male, O for Other)
    char dept;          // Employee department (A, B, or C)
    bool ML = false;   // Flag to indicate if maternity leave is allowed

    char nationality;
    char nationalityName[30]; // To store nationality name

    // Assign a constant value for leave days
    int leave = 15; // constant assignment


    // Prompt the user to enter the employee name
    printf("Enter employee name: ");
    scanf("%s", name);
    getchar(); // Consume the newline character left by scanf

    // Prompt the user to enter the employee number
    printf("Enter employee number: ");
    scanf("%d", &rec_num);
    getchar(); // Consume the newline character left by scanf

    while (true) { // Get department input and validate it
        printf("Enter Department A, B, or C: ");
        scanf("%c", &dept);
        getchar(); // Consume the newline character left by scanf

        // Check if the entered department is valid
        if (dept == 'A' || dept == 'B' || dept == 'C') {
            break; // Exit loop if input is valid
        }
        // Inform the user of invalid input and prompt again
        printf("Invalid input\n");
    }

    while (true) { // Get salary input based on department and validate it
        // Prompt for salary based on department
        if (dept == 'A') {
            printf("Enter employee salary between 1000 to 5000: ");
        } else if (dept == 'B') {
            printf("Enter employee salary between 5001 to 10000: ");
        } else {
            printf("Enter employee salary between 10001 to 20000: ");
        }
        scanf("%d", &salary);
        getchar(); // Consume the newline character left by scanf

        // Validate salary range based on department
        if ((dept == 'A' && salary >= 1000 && salary <= 5000) ||
            (dept == 'B' && salary >= 5001 && salary <= 10000) ||
            (dept == 'C' && salary >= 10001 && salary <= 20000)) {
            break; // Exit loop if salary is within valid range
        }
        // Inform the user of invalid salary and prompt again
        printf("Invalid salary\n");
    }

    while (true) { // Get gender input and validate it
        printf("Enter %s gender F, M, or O",name);
        scanf("%c", &gender);
        getchar(); // Consume the newline character left by scanf

        if (gender == 'F' || gender == 'M' || gender == 'O') { // Check if the entered gender is valid
            // Set maternity leave flag if gender is Female
            if (gender == 'F') {
                printf("%s is allowed maternity leave\n", name);
                ML = true;
            }
            break; // Exit loop if input is valid
        }
        // Inform the user of invalid input and prompt again
        printf("Invalid input\n");
    }

    // Get nationality input
    while (true) {  // Prompt the user to enter their nationality:
        printf("Enter nationality (0-9):\n0. USA\n1. Canada\n2. Mexico\n3. UK\n4. Germany\n5. France\n6. Japan\n7. China\n8. India\n9. Australia\n");
        scanf("%c", &nationality); // Read the nationality input from the user
        getchar(); // Consume the newline character left by scanf

        // Check if the input is a valid nationality code
        // Nationality codes are from '1' to '9'
        if (nationality >= '0' && nationality <= '9') {
            break; // If valid, exit the loop
        }
        printf("Invalid input\n"); // If the input is invalid, print an error message
    }

    // Map nationality code to country name
    if (nationality == '0') {
        sprintf(nationalityName, "USA");
    } else if (nationality == '1') {
        sprintf(nationalityName, "Canada");
    } else if (nationality == '2') {
        sprintf(nationalityName, "Mexico");
    } else if (nationality == '3') {
        sprintf(nationalityName, "UK");
    } else if (nationality == '4') {
        sprintf(nationalityName, "Germany");
    } else if (nationality == '5') {
        sprintf(nationalityName, "France");
    } else if (nationality == '6') {
        sprintf(nationalityName, "Japan");
    } else if (nationality == '7') {
        sprintf(nationalityName, "China");
    } else if (nationality == '8') {
        sprintf(nationalityName, "India");
    } else if (nationality == '9') {
        sprintf(nationalityName, "Australia");
    } else {
        sprintf(nationalityName, "N/A");
    }


    // Print formatted employee details
    printf("Formatted Employee Details: \n%d\t%s\t%c\t%c\t%d\t%d\t%s\n", rec_num, name, gender, dept, salary, leave, nationalityName);
    printf("Employee Summary: \nEmployee number: %d\nEmployee name: %s\nEmployee gender: %c\nEmployee department: %c\nEmployee Salary: %d\nEmployee leaves accumulation: %d\nEmployee nationality: %s\n", rec_num, name, gender, dept, salary, leave, nationalityName);

    // Print maternity leave information if applicable
    if (ML) {
        printf("Maternity leave allowed.\n");
    }
}