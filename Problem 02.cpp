#include <stdio.h>

int main() {
    int x, y;

    printf("Enter number1: ");
    scanf("%d", &x);

    printf("Enter number2: ");
    scanf("%d", &y);

    int temp = x;
    x = y;
    y = temp;

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
