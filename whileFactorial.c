#include<stdio.h>
int main()
{
    //factorial of a number
    //n=5: fact=1*2*3*4*5 or 5*4*3*2*1
    int n,i,fact=1;
    printf("ENter the input : ");
    scanf("%d",&n);

    i=n;

    while(i>=1)
    {
        fact=fact*i;
        i--;
    }

    //n=5
    //1*5*4*3*2*1:
    printf("Factorial: %d",fact);
}