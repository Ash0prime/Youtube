#include<stdio.h>
#include<math.h>
int main()
{
    //1^2 + 2^2 + 3^2.....
    //pow().... pow(x,y)....x^y

    int n,i;
    float sum=0;
    printf("ENte rthe valu : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum=sum+(float)pow(i,2);
    }

    printf("SUmmation %f",sum);
}