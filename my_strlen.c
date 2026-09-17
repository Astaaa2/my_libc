#include "my_libc.h"

unsigned long my_strlen(const char *s)
{
    unsigned long i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}