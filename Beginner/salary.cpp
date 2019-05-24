#include<stdio.h>
int main()
{
    int number,hour;
    double  hour_amount,salary;
    scanf("%d %d",&number,&hour);
    scanf("%lf",&hour_amount);
    salary=hour*hour_amount;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2lf",salary);
    return 0;

}
