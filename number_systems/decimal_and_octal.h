#include "../main.h"

int decimal_to_octal(int decimal)
{
    int octal;
    for (int i = 0; decimal;)
    {
        octal += (decimal % 8) * power(10, i++);
        decimal /= 8;
    }
    return octal;
}

int octal_to_decimal(int octal)
{
    int decimal;
    for (int i = 0; octal;)
    {
        decimal += (octal % 10) * power(8, i++);
        octal /= 10;
    }
    return decimal;
}
