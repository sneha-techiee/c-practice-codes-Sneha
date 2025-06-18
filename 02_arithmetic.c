#include <stdio.h>

int main() {
    int a, b, add, sub;

    // Prompt the user for input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Perform calculations
    add = a + b;
    sub = a - b;

    // Print results separately
    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);

    return 0;
}

