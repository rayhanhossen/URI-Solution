#include<stdio.h>

int main()
{
    double a,b,c,d,e,ava1,ava2;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    ava1=((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
    printf("Media: %.1lf\n",ava1);
    if(ava1>=7.0)
        printf("Aluno aprovado.\n");
    else if(ava1<5.0)
        printf("Aluno reprovado.\n");
    else if(5.0>ava1<6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        ava2=(ava1+e)/2;
        if(ava2>=5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",ava2);
    }
    return 0;
}
