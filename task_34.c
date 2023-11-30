/* Задача 4. Какое время года
Ввести номер месяца и вывести название времени года.
Данные на входе: Целое число от 1 до 12 - номер месяца.
Данные на выходе: Время года на английском: winter, spring, summer, autumn
Пример No1 
Данные на входе: 4
Данные на выходе: spring
Пример No2 
Данные на входе: 1
Данные на выходе: winter
*/

#include<stdio.h>
int main(void) {
    int month;
    printf("Введите номер месяца - целое число от 1 до 12: ");  
    scanf("%d", &month);
    if (month == 1 || month == 2 || month == 12) printf("winter\n");
    else if (month >= 3 && month < 6) printf("spring\n");
    else if (month >= 6 && month < 9) printf("summer\n");
    else if (month >= 9 && month < 12) printf("autumn\n");
    else printf("Недопустимое значение\n");        
}