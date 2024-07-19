#include <cstdint>

#include "lib.h"

std::uint32_t modulo(const std::uint32_t number_a, const std::uint32_t number_b)
{
    if (number_b == 0)
        return 0;
    auto div = number_a / number_b;
    return number_a - (div * number_b);
}

std::uint32_t sum_of_digits(std::uint32_t number)
{
    std::uint32_t num_digits = 0;

    do
    {
        number /= 10;
        num_digits++;
    } while (number > 0);

    return num_digits;
}

std::uint32_t cross_sum(std::uint32_t number)
{
    std::uint32_t sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
