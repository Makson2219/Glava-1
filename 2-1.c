#include <stdio.h>
int main() {
    int number=1;
    printf("Введите целое число: ");
    scanf("%d", &number);
    printf("%d\n", (number % 2 * 2 - 1) * (number != 0));
    return 0;
  }
