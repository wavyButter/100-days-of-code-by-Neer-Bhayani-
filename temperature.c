#include <stdio.h>

int main() {
    float celcius, fahrenheit;
    printf("Write temperature in Celsius: ");
    scanf("%f", &celcius);
    
    fahrenheit = (celcius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celcius, fahrenheit);

    return 0;
}
