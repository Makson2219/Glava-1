#include <stdio.h>
int main() {
    int n;
    printf("Введите целое число n: ");
    //scanf("%d", &n);
     // Проверяем, является ли число степенью двойки
    // n > 0 && (n & (n - 1)) == 0
    printf("%d\n", (n > 0) && !(n & (n - 1))); 
    return 0;
}
