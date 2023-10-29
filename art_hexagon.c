/* Нарисовать соты 
     __    __
    /  \__/  \
    \__/  \__/
    /  \__/  \
    \__/  \__/
*/

#include<stdio.h>

int main(void)
{
    u_int8_t count = 2; // количество рядов сот
   
    printf(" __    __\n");
    for (int i = 0; i < count; i++)
    {
        printf("/  \\__/  \\\n");
        printf("\\__/  \\__/\n");
    }
    return 0;    
}