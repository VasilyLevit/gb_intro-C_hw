/* Задача 6. Возвести в степень
Написать рекурсивную функцию возведения целого числа n в степень p.
 int recurs_power(int n, int p)
Используя данную функцию, решить задачу.
Данные на входе: Два целых числа -100 >= n >= 100 и 0 >= p >= 100
Данные на выходе: Одно целое число n в степени p
Пример No1 
Данные на входе: 2 3
Данные на выходе: 8
Пример No2 
Данные на входе: 3 4
Данные на выходе: 81 */

#include<stdio.h>

long recurs_power(int n, unsigned p)
{
    static int res = 1;
    if(p > 0)
    {
        res *= n;
        recurs_power(n, p - 1);
    }
    return res;
}

int main(void)
{
    printf("Введите два целых числа через пробел: ");
    int n;
    unsigned p;
    scanf("%d%u", &n, &p);
    printf("%ld\n", recurs_power(n, p));
    return 0;
}