#include <stdio.h>

//Write a C program to find the sum of all numbers from 0 to n using while loop.

int main() {
    int i=0, a, sum=0;

    printf("Enter the last number:\n");
    scanf("%d", &a);

    while(i<=a){
        printf("The Number is %d \n", i);
        sum = sum + i;
        printf("Print sum value till now %d \n\n\n", sum);
        i++;
    }
    // Print the Final Sum
    printf("The value of SUM is %d \n", sum);

    return 0;
}
