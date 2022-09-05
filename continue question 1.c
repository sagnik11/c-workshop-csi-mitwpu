#include <stdio.h>

//Finding odd numbers from 0 to 20 using continue.

int main() {

    int i;
    for(i=0;i<20;i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
