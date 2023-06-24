#include <stdio.h>
#include <stdlib.h>

int is_valid_number(char *number)
{
    int i = 0;

    while (number[i])
    {
        if (number[i] < '0' || number[i] > '9')
            return 0;
        i++;
    }

    return 1;
}

int multiply_numbers(int num1, int num2)
{
    return num1 * num2;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];

    if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
    {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(num1_str);
    int num2 = atoi(num2_str);

    int result = multiply_numbers(num1, num2);

    printf("%d\n", result);

    return 0;
}
