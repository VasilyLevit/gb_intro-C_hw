/* Скобки
Проверить строку состоящую из скобок "(" и ")" на корректность.
Данные на входе: На вход подается строка состоящая из символов '(', ')' и заканчивающаяся символом '.'. Размер строки не более 1000 символов. 
Данные на выходе: Необходимо напечатать слово YES если скобки расставлены верно и NO в противном случае.
Пример No1
Данные на входе: (()()). 
Данные на выходе: YES
Пример No2
Данные на входе: ()(. 
Данные на выходе: NO */

#include<stdio.h>

int count = 0;

// checkng the correctness of brackets
// count = 0 - correct
// count > 0 - opening brackets > closing brackets
// count < 0 in progress -  closing brackets > opening brackets
int roundBrackets(char bracket)
{ 
    bracket == '(' ? count++ : count-- ;
    // printf("%d\n", count);  // test
    if (count < 0)  // closing brackets > opening brackets
        return -1;  // there is no point in checking further
    return count;    
}

int main(void)
{
    char simbol;
    printf("Введите строку из круглых скобок: ");
    while ((simbol = getchar()) != '.')
    {       
        if (simbol == '(' || simbol == ')')
            // printf("%c\n", simbol); // test
            if (roundBrackets(simbol) == -1)  // if closing brackets > opening brackets
                break;
    }
    printf("%s\n", count == 0 ? "YES" : "NO");
    return 0;
}