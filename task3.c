#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Число: ");
    if ((n >= 1) && (n <= 12))
    {
        if ((n == 1) || (n == 2) || (n == 12))
        {
            printf("Зима, холодно\n");
        }
        if ((n >= 3) && (n <= 5))
        {
            printf("Весна, тепло\n");
        }
        if ((n >= 6) && (n <= 8))
        {
            printf("Літо, спека\n");
        }
        if ((n >= 9) && (n <= 11))
        {
            printf("Осінь, дощ\n");
        }
    }
}