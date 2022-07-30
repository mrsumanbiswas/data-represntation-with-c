#include <stdio.h>

#include "number_systems/decimal_and_hexadecimal.h"

int main()
{
    int input = 0;
    scanf("%d", &input);
    char output[number_of_bits(input) / 16];
    decimal_to_hexadecimal(input, output);

    printf("%s\n", output);

    return 0;
}
