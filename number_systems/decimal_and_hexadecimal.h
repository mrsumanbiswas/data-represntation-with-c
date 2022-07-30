#include "../main.h"
#include <string.h>
#include <stdio.h>
#pragma once
const char *hexa[16] = {
    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};

void decimal_to_hexadecimal(int decimal, char *hexadecimal)
{
    for (int i = 0; decimal; i++)
    {
        hexadecimal[i] = *hexa[decimal % 16];
        decimal /= 16;
    }
    reverse_str(hexadecimal);
}

int hexadecimal_to_decimal(char *hexadecimal[])
{
    int decimal = 0, temp_hexa = 0;
    for (int i = 0; temp_hexa;)
    {
        decimal += (temp_hexa % 10) * power(16, i++);
        temp_hexa /= 10;
    }
    return decimal;
}
