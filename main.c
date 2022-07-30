#include <stdio.h>

#include "number_systems/decimal_and_binary.h"

int main()
{
    int input = 0, output = 0;
    scanf("%d", &input);
    output = decimal_to_binary(input);
    printf("%d\n", output);
    return 0;
}
