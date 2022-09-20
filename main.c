#include <stdio.h>

int main() {
    int number1, number2; // числа над которыми будем проводить операции
    int pervoe = -3; //граница (-3)
    int poslednee = 6; // граница (6)
    printf("Enter the first number: \n");
    scanf("%d", &number1);
    printf("The result of checking your number for hitting the interval [-3;6] (true/false): \n");
    printf("%d\n", number1 >= pervoe && number1 <= poslednee);
    //если введённо число входит в диапазон, получим 1, иначе 0;
    printf("Enter the second number: \n");
    scanf("%d", &number2);
    printf("The result of checking: \n");
    printf("%d", (number2 >> 4) % 2); //сдвигаем бит и проверяем
    return 0;
}