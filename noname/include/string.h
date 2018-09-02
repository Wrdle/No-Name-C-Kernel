#ifndef STRING_H
#define STRING_H

#include "types.h"
#include "screen.h"
uint16 strlength(string ch)
{
    uint16 i = 1;
    while (ch[i++]);
    return --i;
}

string strReverse(string input)
{
    uint8 length = strlength(input);
    string reversed = (string)4;
    int8 i = 0;

    for (int8 lengthLoop = length -1; lengthLoop >= 0; lengthLoop = lengthLoop - 1)
    {
        reversed[i] = input[lengthLoop];
        i = i + 1;
    }
    return reversed;
}


#endif