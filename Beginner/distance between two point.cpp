#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,num1,num2,distance;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    num1=x2-x1;
    num2=y2-y1;
    distance=sqrt((num1*num1+num2*num2));
    printf("%0.4lf\n",distance);
    return 0;


}
