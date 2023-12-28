/* Задача 4. Отсортировать по последней цифре
Считать массив из 10 элементов и отсортировать его по последней цифре.

Данные на входе: 10 целых чисел через пробел 
Данные на выходе: Этот же массив отсортированный по последней цифре

Пример No1 
Данные на входе:  14 25 13 30 76 58 32 11 41 97
Данные на выходе: 30 11 41 32 13 14 25 76 97 58

Пример No2 
Данные на входе: 109 118 100 51 62 73 1007 16 4 555
Данные на выходе: 100 51 62 73 4 555 16 1007 118 109 */

#include <stdio.h>

void sort(int* arr, int n)
{
    int i, j;
    for(i = 0; i < n; ++i)
    {
        for(j = i; j < n; ++j)
        {
            if(arr[i] % 10 > arr[j] % 10)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
    }
}

void input(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return;
}

void print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    enum {SIZE = 10};

    int array[SIZE] = {14, 25, 13, 30, 76, 58, 32, 11, 41, 97}; // test data
    // int array[SIZE];
    // printf("Введите 10 целых чисел через пробел: ");
    // input(array, SIZE);

    sort(array, SIZE);
    print(array, SIZE);
    return 0;
}