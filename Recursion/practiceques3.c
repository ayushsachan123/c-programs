// convert celcius to fahrenheit//
#include <stdio.h>
float converttemp(float celcius);
int main()
{
    float n;
    printf("enter the celcius:");
    scanf("%f", &n);
    float far = converttemp(n);
    printf("far;%f", far);

    return 0;
}
float converttemp(float celcius)
{
    float far = celcius * (9.0/ 5.0) + 32;
    return far;
}