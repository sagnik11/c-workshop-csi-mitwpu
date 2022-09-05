#include <stdio.h>

//Program to find all numbers between 1 to 100 divisible by 4

int main() {
    int i;

    printf("Numbers from 0 to 100 divisible by 4\n");

    for(i = 0; i <= 100; i++)
    {
        if(i%4 == 0)
        {
            printf("%d\t", i);
        }
        i++;
    }

    return 0;
}
