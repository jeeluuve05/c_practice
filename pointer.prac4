#include <stdio.h>

int main(void)
{
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, (void *)pi);

    (*pi)++; // Increments the value at the address (i becomes 11)
    printf("i = %d, pi = %p\n", i, (void *)pi);

    *pi++; // Moves pi to the next int, but doesn't change i
    printf("i = %d, pi = %p\n", i, (void *)pi);

    return 0;
}
