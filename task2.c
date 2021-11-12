#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("A: ");
    int b = get_int("B: ");
    int sum = 0;
    if (a < b)
    {
        for (int i = a + 1; i < b; i++)
        {
            sum = sum + i;
        }
        printf("Сума: %i\n", sum);
    }
    else
    {
        printf("B має бути більшим за A\n");
    }
}