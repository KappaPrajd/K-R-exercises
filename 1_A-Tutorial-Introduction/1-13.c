#include <stdio.h>

#define MAX_WORDS 5

int main()
{
    int c;
    static int words[MAX_WORDS];
    int currentWord = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            currentWord++;
        else
            words[currentWord]++;
    }

    for (int i = 0; i < MAX_WORDS; i++)
        printf("\n%d word: \t%d", i + 1, words[i]);

    printf("\n");

    return 0;
}