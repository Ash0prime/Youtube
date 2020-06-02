#include<stdio.h>
int main()
{
    //wap to generate multiplication table
    int n,i;
    printf("ENter the value: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        //5 * 1 = 5
        //5 * 2 = 10
        printf("%d * %d = %d\n",n,i,n*i);
    }

}