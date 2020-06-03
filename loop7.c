#include<stdio.h>
int main()
{
    //1/1 + 1/2 + 1/3 + 1/4 .....

    //1/n
    //1/i...... 1/n

    int n,i;
    float sum=0;
    printf("ENter the value of  n : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum=sum+(float)1/i;
    }

    printf("SUmmation : %f\n",sum);
}