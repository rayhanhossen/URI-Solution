#include<stdio.h>

int main()
{
    int n;
    int hour,minutes,second;
    scanf("%d",&n);
    hour=n/3600;
    minutes=(n/60)%60;
    second=n%60;
    printf("%d:%d:%d\n",hour,minutes,second);
    return 0;
}
