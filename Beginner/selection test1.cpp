#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int e,f,g;
    e=c+d;    f=a+b;  g=a%2==0;
    if(b>c&&d>a&&e>f&&c>0&&d>0&&g)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
    return 0;

}
