#include <stdio.h>

int main() {
    int choice;

    printf("Choose your favorite programming language:\n");
    printf("1. C\n");
    printf("2. Python\n");
    printf("3. Java\n");
    printf("4. JavaScript\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected C.\n");
            break;
        case 2:
            printf("You selected Python.\n");
            break;
        case 3:
            printf("You selected Java.\n");
            break;
        case 4:
            printf("You selected JavaScript.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

