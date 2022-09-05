#include <stdio.h>

//Let's try and Print all numbers from 0 to 20, but, I don't want the program to run after I reach 15.

int main() {

    /* local variable definition */
    int a = 0;

    /* while loop execution */
    while( a <= 20 ) {

        printf("value of a: %d\n", a);
        a++;

        if( a > 15) {
            /* terminate the loop using break statement */
            break;
        }
    }

    return 0;
}
