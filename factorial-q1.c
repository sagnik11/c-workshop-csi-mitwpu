#include <stdio.h>

int main() {
    int i, a ,f = 1;

    printf("Enter a number:\n");
    scanf("%d", &a);

    for (i = 1; i <= a; i++){
        printf("The value of i is %d\n", i);
        f = f * i ;
    }

    printf("Factorial of %d is %d\n", a, f);
    return 0;
}
