#include<stdio.h>
int main()
{
    int i, even=0,odd=0,number;
    scanf("%d",&number);
    for(i=0;i<number;i++){
        if(i%2==0)
            even+=i;
        else
            odd+=i;
    }
    printf("sum of even:%d\n",even);
    printf("sum of odd:%d\n",odd);
    return 0;
}
