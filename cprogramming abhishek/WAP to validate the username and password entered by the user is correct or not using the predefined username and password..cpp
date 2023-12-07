#include <stdio.h>
#include <string.h> 
int main() {
    char correctUsername[] = "manas";
    char correctPassword[] = "123456789";
    char enteredUsername[50];
    char enteredPassword[50];
    printf("ABHISHEK SHARMA\n");
    printf("Enter username: ");
    scanf("%s", enteredUsername);
    printf("Enter password: ");
    scanf("%s", enteredPassword);
    if (strcmp(enteredUsername, correctUsername) == 0 && strcmp(enteredPassword, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Please check your username and password.\n");
    }
    return 0;
