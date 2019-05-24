#include<stdio.h>

int main()
{
    int dis;
    double fuel;
    scanf("%d",&dis);
    scanf("%lf",&fuel);
    printf("%.3lf km/l\n",dis/fuel);
    return 0;
}
