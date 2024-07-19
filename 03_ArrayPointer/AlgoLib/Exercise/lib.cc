#include <cstddef>
#include <cstdint>

#include "lib.h"

bool validInput(const std::int32_t *array, const std::size_t length)
{
    return array != nullptr && length > 0;
}

bool all_of(const std::int32_t *array,
            const std::size_t length,
            const std::int32_t value)
{
    if (!validInput(array, length))
        return false;
    for (std::size_t i = 0; i < length; ++i)
    {
        if (array[i] != value)
            return false;
    }
    return true;
}

bool any_of(const std::int32_t *array,
            const std::size_t length,
            const std::int32_t value)
{
    if (!validInput(array, length))
        return false;
    for (std::size_t i = 0; i < length; ++i)
    {
        if (array[i] == value)
            return true;
    }
    return false;
}

bool none_of(const std::int32_t *array,
             const std::size_t length,
             const std::int32_t value)
{
    if (!validInput(array, length))
        return false;
    for (std::size_t i = 0; i < length; ++i)
    {
        if (array[i] == value)
            return false;
    }
    return true;
}

std::size_t count(const std::int32_t *array,
                  const std::size_t length,
                  const std::int32_t value)
{
    if (!validInput(array, length))
        return false;
    std::size_t count = 0;
    for (std::size_t i = 0; i < length; ++i)
        count += (array[i] == value);
    return count;
}
