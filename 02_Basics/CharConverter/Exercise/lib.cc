#include "lib.h"

bool is_numeric(const char character)
{
    return (character >= '0' && character <= '9');
}

bool is_alpha(const char character)
{
    return (character >= 'A' && character <= 'Z') ||
           (character >= 'a' && character <= 'z');
}

bool is_alpha_numeric(const char character)
{
    return is_alpha(character) || is_numeric(character);
}

bool is_upper_case(const char character)
{
    return (character >= 'A' && character <= 'Z');
}

bool is_lower_case(const char character)
{
    return (character >= 'a' && character <= 'z');
}

char to_upper_case(const char character)
{
    if (is_lower_case(character))
    {
        return character - 32;
    }
    return character;
}

char to_lower_case(const char character)
{
    if (is_upper_case(character))
    {
        return character + 32;
    }
    return character;
}
