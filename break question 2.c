#include <stdio.h>

//Program to calculate the sum of numbers (10 numbers max) and If the user enters a number less than 5, the loop terminates and the number is not added to the sum

int main() {

    int number;
    int sum = 0;
    // take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {

        // break condition if the user enters 5 or less than 5
        if (number < 5) {
            break;
        }

        // add all numbers to the sum greater than 5
        sum += number;

        //sum after every addition
        printf("Sum for %d: %d\n",number, sum);
        number--;
    }

    // display the sum
    printf("The sum is: %d\n", sum);

    return 0;
}
