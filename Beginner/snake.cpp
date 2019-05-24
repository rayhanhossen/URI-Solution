#include<stdio.h>

int main()
{
    int x,y;
    double cq=4.00,xs=4.50,xb=5.00,ts=2.00,re=1.50;
    scanf("%d %d",&x,&y);
    if(x==1)
        printf("Total: R$ %.2lf\n",cq*y);
    else if(x==2)
        printf("Total: R$ %.2lf\n",xs*y);
    else if(x==3)
        printf("Total: R$ %.2lf\n",xb*y);
    else if(x==4)
        printf("Total: R$ %.2lf\n",ts*y);
    else if(x==5)
        printf("Total: R$ %.2lf\n",re*y);
    return 0;
}
