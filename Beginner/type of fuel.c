#include<stdio.h>


int main()
{
    int i,a=0,b=0,c=0,n;
    printf("MUITO OBRIGADO\n");
    for(i=0;i<100;i++){
        scanf("%d",&n);
        if(n>=1 && n<=3){
            if(n==1)a++;
            else if(n==2)b++;
            else if(n==3)c++;
        }
        else if(n==4)break;
    }
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);
    return 0;
}
