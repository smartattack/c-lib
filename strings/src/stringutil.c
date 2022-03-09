/*
 * The typical - utility functions
 */
#include <string.h>
#include <ctype.h>   // isspace


// Remove leading spaces from string, in-place
void trim_leading_spaces(char **string)
{
    for (;**string && isspace(**string); (*string)++);
}

// Remove trailing spaces from string, in-place
void trim_trailing_spaces(char **string)
{
    int len = strlen(*string);
    int i;
    for (i = len - 1; i >0 && isspace((*string)[i]); i--);
    (*string)[i+1] = '\0';
}

// Trim leading and trailing whitespace from string,-in place
void trim_whitespace(char **string)
{
    trim_leading_spaces(string);
    trim_trailing_spaces(string);
}

// Reverse a string
void reverse(char **string)
{
    int len = strlen(*string);
    for (int i = 0; i < len/2; i++)
    {
        char temp = (*string)[i];
        (*string)[i] = (*string)[len - i - 1];
        (*string)[i - len - 1] = temp;
    }
}