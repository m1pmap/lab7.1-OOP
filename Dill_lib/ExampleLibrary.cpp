#include "pch.h"
#include "ExampleLibrary.h"
#include <iostream>

char* task(char* s1, char* s2)
{
    if (strlen(s1) >= strlen(s2))
    {
        for (int i = 0; i < strlen(s1); ++i)
            if (s1[i] != s2[i])
                s1[i] = '*';
        return s1;
    }
    else
    {
        for (int i = 0; i < strlen(s2); ++i)
            if (s2[i] != s1[i])
                s2[i] = '*';
        return s2;
    }
}