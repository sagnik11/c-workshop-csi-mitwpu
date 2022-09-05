#include <stdio.h>

//Write a C program to store the temperature of two cities for a week and display it. Display the data that you have stored.

int main() {
    const CITY = 2;
    const WEEK = 7;

    int temperature[2][7];

    // Using nested loop to store values in a 2d array
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            printf("City %d, Day %d: ", i + 1, j + 1);
            scanf("%d", &temperature[i][j]);
        }
    }
    printf("\nDisplaying values: \n\n");

    // Using nested loop to display vlues of a 2d array
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
        }
    }

    return 0;
}

