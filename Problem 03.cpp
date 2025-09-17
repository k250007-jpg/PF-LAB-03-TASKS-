#include <stdio.h>

int main() {
    int input_num;
    char ascii_char;

    printf("Enter a number between 65 and 90: ");
    scanf("%d", &input_num);

    ascii_char = (char)input_num;

    printf("%d = %c\n", input_num, ascii_char);

    return 0;
}
