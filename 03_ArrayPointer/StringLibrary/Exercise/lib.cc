#include <cstddef>

#include "lib.h"

/** START PREV FUNCS **/

bool is_upper_case(const char character)
{
    if ((character >= 'A') && (character <= 'Z'))
    {
        return true;
    }

    return false;
}

bool is_lower_case(const char character)
{
    if ((character >= 'a') && (character <= 'z'))
    {
        return true;
    }

    return false;
}

bool is_numeric(const char character)
{
    if ((character >= '0') && (character <= '9'))
    {
        return true;
    }

    return false;
}

bool is_alpha(const char character)
{
    if (is_upper_case(character) || is_lower_case(character))
    {
        return true;
    }

    return false;
}

bool is_alpha_numeric(const char character)
{
    return is_numeric(character) || is_alpha(character);
}

char to_upper_case(const char character)
{
    if (is_lower_case(character))
    {
        return character - 32;
    }

    return character;
}

char to_upper_case_(const char character)
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

char to_lower_case_(const char character)
{
    if (is_upper_case(character))
    {
        return character + 32;
    }

    return character;
}

/** END PREV FUNCS **/
#include <iostream>
char *to_upper_case(char *text)
{
    if (text == nullptr)
        return nullptr;
    for (std::size_t i = 0; text[i] != '\0'; i++)
        text[i] = to_upper_case(text[i]);
    return text;
}

char *to_lower_case(char *text)
{
    if (text == nullptr)
        return nullptr;
    for (std::size_t i = 0; text[i] != '\0'; i++)
        text[i] = to_lower_case(text[i]);
    return text;
}

std::size_t string_length(const char *text)
{
    if (text == nullptr)
        return 0;
    std::size_t length = 0;
    while (text[length] != '\0')
        length++;
    return length;
}

bool string_equal(const char *string1, const char *string2)
{
    if (string1 == nullptr || string2 == nullptr)
        return false;
    if (string_length(string1) != string_length(string2))
        return false;

    for (std::size_t i = 0; string1[i] != '\0' || string2[i] != '\0'; i++)
    {
        if (string1[i] != string2[i])
            return false;
    }
    return true;
}
