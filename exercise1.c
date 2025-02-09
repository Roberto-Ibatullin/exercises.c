#include <stdio.h>  

int main() {
    int choice;
    float temp, result;

    printf("Temperature Conversion Program\n");
    printf("Choose an option:\n");
    printf("1. Convert from Celsius to Fahrenheit\n");
    printf("2. Convert from Fahrenheit to Celsius\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in degrees Celsius: ");
        scanf("%f", &temp);
        result = (temp * 9 / 5) + 32;
        printf("%.2f °C = %.2f °F\n", temp, result);
    } else if (choice == 2) {
        printf("Enter temperature in degrees Fahrenheit: ");
        scanf("%f", &temp);
        result = (temp - 32) * 5 / 9;
        printf("%.2f °F = %.2f °C\n", temp, result);
    } else {
        printf("Invalid choice. Please try again.\n");
    }

    return 0;  
}
