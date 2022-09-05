#include <stdio.h>

//Program to take 5 values from the user and store them in an array. Then Print the elements stored in the array.

int main() {

    int values[5];

    printf("Enter 5 integers: ");

    // taking input and storing it in an array
    for(int i = 0; i < 5; ++i) {
        scanf("%d", &values[i]);
    }

    printf("Displaying integers: \n");

    // printing elements of an array
    for(int i = 0; i < 5; ++i) {
        printf("%d\n", values[i]);
    }
    return 0;
}
//
//One thing that you should always keep in mind is
//
//Don't access elements that are out of bounds.
//
//You can access the array elements from testArray[0] to testArray[9].
//
//Now let's say if you try to access testArray[12]. The element is not available. This may cause unexpected output (undefined behavior). Sometimes you might get an error and some other time your program may run correctly.
//
//Hence, you should never access elements of an array outside of its bound.
