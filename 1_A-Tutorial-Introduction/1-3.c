#include <stdio.h>

int main()
{
    int lower = 0;
    int upper = 300;
    int step = 20;

    float celcius;
    int fahr = lower;

    printf("Fahrenheit to Celcius conversion table\n\n");

    while (fahr <= upper)
    {
        celcius = (fahr - 32) * (5.0 / 9);

        printf("%3d %6.1f\n", fahr, celcius);
        fahr += step;
    }

    return 0;
}