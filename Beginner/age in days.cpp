#include<stdio.h>

int main()
{
    int n;
    int year1,year,month1,month,days1,days;
    scanf("%d",&n);
    year=n/365;
    month=(n%365)/30;
    days=(n%365)%30;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);
    return 0;
}
