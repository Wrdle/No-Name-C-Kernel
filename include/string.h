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
    string reversed;
    int8 i = 0;

    for (int8 lengthLoop = length -1; lengthLoop >= 0; lengthLoop = lengthLoop - 1)
    {
        reversed[i] = input[lengthLoop];
        i = i + 1;
    }
    return reversed;
}

bool strEquals(string input1, string input2)
{
    int32 length1 = strlength(input1), length2 = strlength(input2);

    if (length1 == length2)
    {
        for (int8 i = 0; i <= length1-1; i++)
        {
            if (input1[i] != input2[i])
            {
                return false;
            }
        }  
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

uint16 strContains(string str, string sub)
{
    int32 i, j=0, k;
    string check;

    for(i=0; str[i]; i++)
    {
        if(str[i] == sub[j])
        {
            for(k=i, j=0; str[k] && sub[j]; j++, k++)
            {
                if(str[k]!=sub[j])
                {
                    break;
                }
                else
                {
                    check[j] = str[k];
                }
            }
        }
    }

    if (strEquals(sub, check) == true)
    {
        newLineCheck();
        return true;
    }
    else
    {
        return false;
    }
    return false;
}


#endif