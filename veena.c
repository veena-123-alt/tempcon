#include <stdio.h>

void convertCelsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}

void convertCelsiusToKelvin(float celsius) {
    float kelvin = celsius + 273.15;
    printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin);
}

void convertFahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
}

void convertFahrenheitToKelvin(float fahrenheit) {
    float kelvin = (fahrenheit - 32) * 5/9 + 273.15;
    printf("%.2f Fahrenheit = %.2f Kelvin\n", fahrenheit, kelvin);
}

void convertKelvinToCelsius(float kelvin) {
    float celsius = kelvin - 273.15;
    printf("%.2f Kelvin = %.2f Celsius\n", kelvin, celsius);
}

void convertKelvinToFahrenheit(float kelvin) {
    float fahrenheit = (kelvin - 273.15) * 9/5 + 32;
    printf("%.2f Kelvin = %.2f Fahrenheit\n", kelvin, fahrenheit);
}

int main() {
    int choice;
    float temperature;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the temperature value: ");
    scanf("%f", &temperature);

    switch(choice) {
        case 1:
            convertCelsiusToFahrenheit(temperature);
            break;
        case 2:
            convertCelsiusToKelvin(temperature);
            break;
        case 3:
            convertFahrenheitToCelsius(temperature);
            break;
        case 4:
            convertFahrenheitToKelvin(temperature);
            break;
        case 5:
            convertKelvinToCelsius(temperature);
            break;
        case 6:
            convertKelvinToFahrenheit(temperature);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
