#include <stdio.h>

int main() {
    float celsius =22, fahrenheit;
    printf("Введите температуру в градусах Цельсия: ");
    //scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("C = %.2f ; F = %.2f\n", celsius, fahrenheit);
    return 0;
}
