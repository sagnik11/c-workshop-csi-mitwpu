#include <stdio.h>

//Help me in Writing "Sorry, I won't disturb the class" 100 times in C

int main() {
    int i=1, a;

    printf("Enter the number of times I need to say Sorry:\n");
    scanf("%d", &a);

    while(i<=a){
        printf("%d Time: Sorry, I won't disturb the class\n", i);
        i++;
    }

    return 0;
}
