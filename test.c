#include <ft_printf.h>

int sum(int count, ...)
{
    va_list args;
    int total  = 0;
    va_start(args , count);
    for (int i = 0; i < count; i++)
    {
        total += va_arg(args, int);
    }

    va_end(args);

    return total;
}

#=========================================================
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n = 42;

    // Test without format specifiers
    ft_printf("Hello World!\n");
    printf("Hello World!\n");

    // Test %c
    ft_printf("Character: %c\n", 'A');
    printf("Character: %c\n", 'A');
    ft_printf("Character: %c\n", '\n');
    printf("Character: %c\n", '\n');

    // Test %s
    ft_printf("String: %s\n", "42 Network");
    printf("String: %s\n", "42 Network");

    // Test %p
    ft_printf("Pointer: %p\n", (void *)&n);
    printf("Pointer: %p\n", (void *)&n);

    // Test %d
    ft_printf("Decimal: %d\n", 123456789);
    printf("Decimal: %d\n", 123456789);
    ft_printf("Decimal: %d\n", -123456789);
    printf("Decimal: %d\n", -123456789);
    ft_printf("Decimal: %d\n", 0);
    printf("Decimal: %d\n", 0);

    // Test %i
    ft_printf("Integer: %i\n", 123456789);
    printf("Integer: %i\n", 123456789);
    ft_printf("Integer: %i\n", -123456789);
    printf("Integer: %i\n", -123456789);
    ft_printf("Integer: %i\n", 0);
    printf("Integer: %i\n", 0);

    // Test %u
    ft_printf("Unsigned Decimal: %u\n", 123456789u);
    printf("Unsigned Decimal: %u\n", 123456789u);
    ft_printf("Unsigned Decimal: %u\n", 0u);
    printf("Unsigned Decimal: %u\n", 0u);
    ft_printf("Unsigned Decimal: %u\n", UINT_MAX);
    printf("Unsigned Decimal: %u\n", UINT_MAX);

    // Test %x
    ft_printf("Hexadecimal (lowercase): %x\n", 123456789u);
    printf("Hexadecimal (lowercase): %x\n", 123456789u);
    ft_printf("Hexadecimal (lowercase): %x\n", 0u);
    printf("Hexadecimal (lowercase): %x\n", 0u);
    ft_printf("Hexadecimal (lowercase): %x\n", UINT_MAX);
    printf("Hexadecimal (lowercase): %x\n", UINT_MAX);

    // Test %X
    ft_printf("Hexadecimal (uppercase): %X\n", 123456789u);
    printf("Hexadecimal (uppercase): %X\n", 123456789u);
    ft_printf("Hexadecimal (uppercase): %X\n", 0u);
    printf("Hexadecimal (uppercase): %X\n", 0u);
    ft_printf("Hexadecimal (uppercase): %X\n", UINT_MAX);
    printf("Hexadecimal (uppercase): %X\n", UINT_MAX);

    // Test %%
    ft_printf("Percent Sign: %%\n");
    printf("Percent Sign: %%\n");

    // Test special characters
    ft_printf("Tab: %c | Newline: %c | Backslash: %c | Quote: %c\n",
        '\t', '\n', '\\', '\"');
    printf("Tab: %c | Newline: %c | Backslash: %c | Quote: %c\n",
        '\t', '\n', '\\', '\"');

    // Test integer limits
    ft_printf("Max Int: %d | Min Int: %d\n", INT_MAX, INT_MIN);
    printf("Max Int: %d | Min Int: %d\n", INT_MAX, INT_MIN);

    // Test pointer
    ft_printf("Pointer: %p\n", (void *)&n);
    printf("Pointer: %p\n", (void *)&n);

    // Test multiple conversions
    ft_printf("Combination: %c %s %d %p %x %%\n",
        'B', "Hello", 42, (void *)&n, 255u);
    printf("Combination: %c %s %d %p %x %%\n",
        'B', "Hello", 42, (void *)&n, 255u);

    // Test small numbers
    ft_printf("Small Number: %x\n", 1u);
    printf("Small Number: %x\n", 1u);

    return (0);
}
