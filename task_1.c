/* Задача 1. Среднее арифметическое чисел
Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.
Данные на входе: 5 целых ненулевых чисел через пробел
Данные на выходе: Одно число в формате "%.3f"
Пример No1 
Данные на входе: 4 15 3 10 14
Данные на выходе: 9.200
Пример No2 
Данные на входе: 1 2 3 4 5
Данные на выходе: 3.000 */

#include <stdio.h>

int main()
{
    int quantity = 5;
    int arr[quantity];
    // filling array
    printf("Введите 5 целых ненулевых чисел через пробел: ");
    for (int i = 0; i < quantity; i++)
        scanf("%d", &arr[i]);
    
    // sum of numbers
    int sum = 0;
    for (int i = 0; i < quantity; i++)
        sum += arr[i];
    
    printf("Среднее арифметическое: %.3f\n", (float)sum / quantity);
    return 0;
}
