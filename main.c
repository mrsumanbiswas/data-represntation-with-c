#include <stdio.h>

#include "number_systems/decimal_and_octal.h"

int main()
{
    int input = 0, output = 0;
    scanf("%d", &input);
    output = octal_to_decimal(input);
    printf("%d\n", output);
    return 0;
}
