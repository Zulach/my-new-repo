#include <stdio.h>
#include <stdbool.h>

int main() {
    int counter = 1; // Initialize counter for the first student
    float subject1, subject2, subject3, avg; // Variables to store marks and average
    char surname[50]; // Array to store student's surname
    char admission_num[50]; // Array to store student's admission number
    char proceed; // Variable to store user's choice to continue or not
    bool yes = true; // Loop control variable
    char grade[10]; // Array to store grade description

    // Main loop to process multiple students
    while (yes) {
        printf("Student No %d\n", counter); // Print student number

        printf("Enter student admission number: ");
        scanf("%s", admission_num); // Read admission number

        printf("Enter student surname: ");
        scanf("%s", surname); // Read surname

        // Read marks for the three subjects
        printf("Enter marks for Subject 1: ");
        scanf("%f", &subject1);

        printf("Enter marks for Subject 2: ");
        scanf("%f", &subject2);

        printf("Enter marks for Subject 3: ");
        scanf("%f", &subject3);

        // Calculate average of three subjects
        avg = (subject1 + subject2 + subject3) / 3.0f;

        // Determine the grade based on the average
        if (avg < 40) {
            grade[0] = 'F';
            grade[1] = 'a';
            grade[2] = 'i';
            grade[3] = 'l';
            grade[4] = '\0'; // Null-terminate the string
        } else if (avg < 50) {
            grade[0] = 'D';
            grade[1] = '\0'; // Null-terminate the string
        } else if (avg < 60) {
            grade[0] = 'C';
            grade[1] = '\0'; // Null-terminate the string
        } else if (avg < 70) {
            grade[0] = 'B';
            grade[1] = '\0'; // Null-terminate the string
        } else {
            grade[0] = 'A';
            grade[1] = '\0'; // Null-terminate the string
        }

        printf("The student achieved a grade of %s\n", grade);
        printf("-------------------------------------------\n");

        // Ask if the user wants to continue
        printf("Do you want to continue? (Input 'Y' for Yes and 'N' for No): ");
        scanf(" %c", &proceed);

        // Validate user input
        while (proceed != 'Y' && proceed != 'N') {
            printf("Invalid input! Input either 'Y' or 'N': ");
            scanf(" %c", &proceed);
        }

        // Set the loop control variable based on user input
        if (proceed == 'Y') {
            yes = true;
        } else if (proceed == 'N') {
            yes = false;
        }

        printf("---------------------------------------------\n");
        counter++; // Increment the student counter
    }

    return 0;
}

