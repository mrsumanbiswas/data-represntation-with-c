#pragma once
#include <stdio.h>

int number_of_bits(int number)
{
    int size;
    while (number)
    {
        size++;
        number /= 2;
    }
    return size;
}

int power(int base, int exponet)
{
    int result = {1};
    for (; exponet; exponet--)
    {
        result *= base;
    }
    return result;
}
