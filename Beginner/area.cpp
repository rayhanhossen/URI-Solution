#include<stdio.h>
#define PI 3.14159
int main()
{
    double a,b,c,  area_of_triangle;
    scanf("%lf %lf %lf",&a,&b,&c);
    area_of_triangle=(0.5*a*c);
    printf("TRIANGULO: %.3lf\n",area_of_triangle);
    double area_of_radious_circle=(PI*c*c);
    printf("CIRCULO: %.3lf\n",area_of_radious_circle);
    double area_of_trapezium=(0.5*(a+b)*c);
    printf("TRAPEZIO: %.3lf\n",area_of_trapezium);
    double area_of_the_square=(b*b);
    printf("QUADRADO: %.3lf\n",area_of_the_square);
    double area_of_rectangle=(a*b);
    printf("RETANGULO: %.3lf\n",area_of_rectangle);
    return 0;

}
