#include <stdio.h>
int main() {
    int a = -7, b = 3, c = 4;
    printf("Введите три числа a, b и c: ");
    //scanf("%d %d %d", &a, &b, &c);
    
    int sign = (a < 0) + (b < 0) + (c < 0);
    int result = (sign % 2 == 0) * (sign != 0) - (sign % 2);
    printf("%d\n", result);
    return 0;
}
