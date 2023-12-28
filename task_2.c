/* Задача 2. Найти минимум
Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
Данные на входе: 5 целых чисел через пробел
Данные на выходе: Одно единственное целое число
Пример No1 
Данные на входе: 4 15 3 10 14
Данные на выходе: 3
Пример No2 
Данные на входе: 1 2 3 4 -5
Данные на выходе: -5 */

#include <stdio.h>

int main()
{
    int quantity = 5;
    int arr[quantity];
    
    // filling array
    printf("Введите 5 целых ненулевых чисел через пробел: ");
    for (int i = 0; i < quantity; i++)
        scanf("%d", &arr[i]);
    // finding minimum
    int min = arr[0];
    for (int i = 1; i < quantity; i++)
        if (arr[i] < min)
            min = arr[i];
    printf("min = %d\n", min);
    return 0; 
}
