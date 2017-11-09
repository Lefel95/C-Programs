#include <stdio.h>
/* transforms a Fahrenheit to Celsius */
#define MIN 0 /*The min of temperature */
#define MAX 300 /*The max of temperature */
#define STEP 20 /*The step which the temperature must scale*/
int main()
{
    int fahr;

    for (fahr = MIN;  fahr <= MAX; fahr = fahr + STEP) {
        printf("%d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}