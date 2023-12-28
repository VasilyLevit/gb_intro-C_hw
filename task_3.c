/* Задача 3. Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

Данные на входе: 12 целых чисел через пробел
Данные на выходе: 12 целых чисел через пробел
Пример No1 
Данные на входе:  4 -5 3 10 -4 -6 8 -10 1 0 5 7
Данные на выходе: 1 0 5 7 4 -5 3 10 -4 -6 8 -10
Пример No2 
Данные на входе:  1 2 3 4 5 6 7 8 9 10 11 12
Данные на выходе: 9 10 11 12 1 2 3 4 5 6 7 8 */

#include <stdio.h>

void input(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return;
}

void print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void rightShift (int arr[], int len)
{
    int temp;
    temp = arr[len - 1];  // сохранение последнего элемента, который будет затёрт
    for (int i = len - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}

// циклический сдвиг массива влево на 1 элемент
void leftShift(int a[], int len) 
{ 
    int tmp = a[0];
    for (size_t i=0; i < len-1; i++ ) 
        a[i] = a[i+1];
    a[len-1] = tmp;
}

int main()
{
    enum {SIZE = 12, SHIFT = 4};
    int  array[SIZE];
    printf("Введите 12 целых чисел через пробел: ");
    input(array, SIZE);
    //  shifting
    for(int i=0; i<SHIFT; i++)
        rightShift(array, SIZE);
    print(array, SIZE);
    return 0;
}