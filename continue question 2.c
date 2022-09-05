#include <stdio.h>

//Let a movie theatre has 30 seats, and 5 seats from the 15th seat are booked, so how can we show the remaining seats to people?

int main () {
    int a = 0;
/* do loop execution */
    do {
        if( a == 15) {
            a = a + 5;
            continue;
        }
        printf("%d ", a);
        a++;
    } while( a < 30 );
    return 0;
}
