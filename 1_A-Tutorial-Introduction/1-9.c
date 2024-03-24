#include <stdio.h>

int main()
{
    int c;
    int lastChar;

    while ((c = getchar()) != EOF)
    {
        if (lastChar == ' ' && c == ' ')
            continue;

        putchar(c);
        lastChar = c;
    }

    return 0;
}