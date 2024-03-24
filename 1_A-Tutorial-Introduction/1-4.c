#include <stdio.h>

int main()
{
    int lower = 0;
    int upper = 300;
    int step = 20;

    float fahr;
    int celcius = lower;

    printf("Celcius to Fahrenheit conversion table\n\n");

    while (celcius <= upper)
    {
        fahr = celcius * (9.0 / 5) + 32;

        printf("%3d %6.1f\n", celcius, fahr);
        celcius += step;
    }

    return 0;
}