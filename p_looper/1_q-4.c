#include <stdio.h>

int main() {
    int N, i = 1;

    // Prompt the user for input
    printf("Enter your number: ");
    scanf("%d", &N);

    // Using while loop to print numbers from 1 to N
    while (i <= N) {
        printf("%d ", i);
        i++;  // Increment i to move to the next number
    }

    return 0;
}

  