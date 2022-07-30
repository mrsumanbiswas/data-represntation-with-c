#pragma once

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

int str_len(char *ptr)
{
    int i = 0;
    while (*(ptr + i) != '\0')
        i++;
    return i;
}

void reverse_str(char *st)
{
    int len, i;
    char *start, *end, temp;

    len = str_len(st);
    start = st;
    end = st;

    for (i = 0; i < len - 1; i++)
        end++;

    for (i = 0; i < len / 2; i++)
    {
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
    }
}
