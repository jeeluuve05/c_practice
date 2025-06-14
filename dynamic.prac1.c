#include <stdio.h>
#include <stdlib.h>
//hashib
int main(void)
{
    int *list;
    list = (int *)malloc(3 * sizeof(int));
    
    if (list == NULL) { // The return value is NULL, check for allocation failure
        printf("Dynamic memory allocation error\n");
        exit(1);
    }

    list[0] = 10;
    list[1] = 20;
    list[2] = 30;

    // Optionally print values to confirm allocation
    printf("Values: %d %d %d\n", list[0], list[1], list[2]);

    free(list); // Free allocated memory
    return 0;
}
