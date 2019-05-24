#include<stdio.h>

int main()
{
    int time,speed;
    double fuel;
    scanf("%d %d",&time,&speed);
    fuel=speed*time;
    printf("%.3lf\n",fuel/12);
    return 0;
}
