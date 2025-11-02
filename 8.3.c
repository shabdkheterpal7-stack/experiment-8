#include <stdio.h>

// Function that accepts pointers as parameters
void modifyValues(int *x, float *y, char *z) {
    *x = *x + 10;   // increment integer by 10
    *y = *y * 2;    // double the float value
    *z = *z + 1;    // change the character to next ASCII value
}

int main() {
    int a = 5;
    float b = 3.5;
    char c = 'A';

    printf("----- BEFORE FUNCTION CALL -----\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    // Passing variables by reference
    modifyValues(&a, &b, &c);

    printf("\n----- AFTER FUNCTION CALL -----\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}
