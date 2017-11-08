#include <stdio.h>
/* transforms a Fahrenheit to Celsius */
int main()
{
    int celsius, fahr, step, min, max;
    min = 0;
    max = 300;
    step = 20;

    fahr = min;

    while (fahr <= max) {
        celsius = 5 * (fahr - 32) / 9;
        /*I changed the equation (original: (5/9) * (F-32) ) because in C language when you divide two int numbers you will have a truncate so 5/9 will become 0 and every statement will return 0 ;) */
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}