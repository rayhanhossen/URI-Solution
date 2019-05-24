#include<stdio.h>

int main()
{
    int t, code_of_pro1,unit_of_pro1,code_of_pro2,unit_of_pro2;
    double price_of_pro1,price_of_pro2;
    double amount1=0,amount2=0,plu;
        scanf("%d %d %lf",&code_of_pro1,&unit_of_pro1,&price_of_pro1);
        scanf("%d %d %lf",&code_of_pro2,&unit_of_pro2,&price_of_pro2);
        amount1=(price_of_pro1*unit_of_pro1);
        amount2=(price_of_pro2*unit_of_pro2);
        plu=amount1+amount2;
    printf("VALOR A PAGAR: R$ %.2lf\n",plu);
    return 0;
}
