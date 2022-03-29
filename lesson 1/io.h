#pragma once
#include "io.cpp"

int main()
{
    int x = readNumber();
    int y = readNumber();
    int z = x + y;
    writeAnswer(z);

    return 0;
}