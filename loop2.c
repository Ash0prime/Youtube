#include<stdio.h>
int main()
{
    //wap to take a number as input and print the summation of all natural number till that number.
    //eg. input=5
    //print  1+2+3+4+5=15
    int n,i;
    int sum=0;
    printf("ENter the value: ");
    scanf("%d",&n);
    for (i = 1; i <=n ; i++)
    {
        /* code */
        sum=sum+i;
    }

    //i:1..2..3..........5
    //sum:1..3..6........15

    printf("sum : %d",sum);

}