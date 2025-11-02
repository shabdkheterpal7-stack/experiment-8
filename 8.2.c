#include <stdio.h>

int main() {
    int a = 10, *iptr;
    float b = 20.5, *fptr;
    char c = 'A', *cptr;

    iptr = &a;
    fptr = &b;
    cptr = &c;

    printf("Initial pointer addresses:\n");
    printf("Address in iptr (int)  = %p\n", (void*)iptr);
    printf("Address in fptr (float)= %p\n", (void*)fptr);
    printf("Address in cptr (char) = %p\n\n", (void*)cptr);

    // Increment pointers
    iptr++;
    fptr++;
    cptr++;

    printf("After incrementing each pointer by 1:\n");
    printf("Address in iptr (int)  = %p\n", (void*)iptr);
    printf("Address in fptr (float)= %p\n", (void*)fptr);
    printf("Address in cptr (char) = %p\n\n", (void*)cptr);

    // Decrement pointers
    iptr--;
    fptr--;
    cptr--;

    printf("After decrementing each pointer by 1 (back to original):\n");
    printf("Address in iptr (int)  = %p\n", (void*)iptr);
    printf("Address in fptr (float)= %p\n", (void*)fptr);
    printf("Address in cptr (char) = %p\n\n", (void*)cptr);

    printf("Values accessed through pointers:\n");
    printf("Value of *iptr (int)  = %d\n", *iptr);
    printf("Value of *fptr (float)= %.2f\n", *fptr);
    printf("Value of *cptr (char) = %c\n", *cptr);

    return 0;
}
