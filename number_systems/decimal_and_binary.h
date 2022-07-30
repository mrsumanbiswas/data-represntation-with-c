#include "../main.h"

int decimal_to_binary(int decimal)
{
    int binary;
    for (int i = 0; decimal;)
    {
        binary += (decimal % 2) * power(10, i++);
        decimal /= 2;
    }
    return binary;
}

int binary_to_decimal(int binary)
{
    int decimal;
    for (int i = 0; binary;)
    {
        decimal += (binary % 10) * power(2, i++);
        binary /= 10;
    }
    return decimal;
}
