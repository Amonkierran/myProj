#include <stdio.h>

int main() {
    int x;
    int y;
    int sum;

    // Asking the user to input values for x and y
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Calculating the sum of x and y
    sum = x + y;

    // Printing the result
    printf("The sum of %d and %d is: %d\n", x, y, sum);

    return 0;
}
