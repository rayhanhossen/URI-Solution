#include<stdio.h>
#define PI 3.14159
int main()
{
    int r;
    double volume;
    scanf("%d",&r);
    volume=(4/3.0*PI*r*r*r);
    printf("VOLUME = %.3lf",volume);
    return 0;
}
