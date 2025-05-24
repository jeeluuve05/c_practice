#include <stdio.h>

int main(void)
{
    char name[100];
    char address[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Use fgets to read the full name (including spaces)

    printf("Enter your current address: ");
    fgets(address, sizeof(address), stdin);  // Use fgets to read the full address (including spaces)

    // Remove newline characters that fgets may add at the end
    name[strcspn(name, "\n")] = '\0';
    address[strcspn(address, "\n")] = '\0';

    printf("Hello, Mr. %s who lives in %s.\n", name, address);

    return 0;
}
