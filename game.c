#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rounds, counter, lucky_number, secret_num, rem, score;
    float div_ans;

    counter = 1;
    score = 0;

    srand(time(NULL)); // Seed the random number generator
    printf("How many rounds will you play for?\n");
    scanf("%d", &rounds);

    while (counter <= rounds) {
        printf("Input your lucky number for round %d:\n", counter);
        scanf("%d", &lucky_number);

        do {
            secret_num = rand() % 100; // Generate random numbers between 1 and 99
        } while (secret_num == 0);

        div_ans = (float)lucky_number / (float)secret_num;
        rem = lucky_number % secret_num;

        printf("Your lucky number is %d and the computer-generated secret number is %d\n", lucky_number, secret_num);

        if (rem == 0) {
            score += 1;
            printf("The division of the two is %.2f\n", div_ans);
            printf("The remainder of the division is %d\n", rem);
            printf("Round no %d is a win!\n", counter);
        } else {
            printf("The division of the two is %.2f\n", div_ans);
            printf("The remainder of the division is %d\n", rem);
            printf("Round no %d is a loss.\n", counter);
        }

        counter++;
    }

    printf("Your total score is %d out of %d rounds.\n", score, rounds);
    return 0;
}

