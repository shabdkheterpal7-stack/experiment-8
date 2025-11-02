#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *ptrInt = &a;
    float *ptrFloat = &b;
    char *ptrChar = &c;

    printf("----- POINTER DEMONSTRATION -----\n");

    printf("\nInteger variable:\n");
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value of ptrInt (address stored) = %p\n", ptrInt);
    printf("Value pointed by ptrInt = %d\n", *ptrInt);

    printf("\nFloat variable:\n");
    printf("Value of b = %.2f\n", b);
    printf("Address of b = %p\n", &b);
    printf("Value of ptrFloat (address stored) = %p\n", ptrFloat);
    printf("Value pointed by ptrFloat = %.2f\n", *ptrFloat);

    printf("\nCharacter variable:\n");
    printf("Value of c = %c\n", c);
    printf("Address of c = %p\n", &c);
    printf("Value of ptrChar (address stored) = %p\n", ptrChar);
    printf("Value pointed by ptrChar = %c\n", *ptrChar);

    return 0;
}
