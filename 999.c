#include <stdio.h>
#include <conio.h> // For getch() and _getch() functions

#define MAX_PASSWORD_LENGTH 20

int main() {
    printf("Enter your password: ");

    char password[20 + 1]; // +1 for null-terminator
    int i = 0;
    char c;

    while (i <21) {
        c = _getch(); // Use _getch() to read a character without echoing
        if (c == '\r' || c == '\n') { // Check if Enter key is pressed
            break;
        }
        password[i] = c;
        printf("*"); // Display an asterisk for each character
        i++;
    }
    password[i] = '\0'; // Null-terminate the password string

    printf("\nPassword entered: %s\n", password);

    return 0;
}

