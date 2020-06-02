#include<stdio.h>
int main()
{
    //wap to find the factorial of a number
    //5!=5*4*3*2*1

    int n,i;
    int fact=1;
    printf("Enter value: ");
    scanf("%d",&n);

    for ( i = n; i >=1; i--)
    {
        /* code */
        fact=fact*i;
    }
    printf("Factorial : %d",fact);
    //n=5
    //i:5..4.......1..0
    //fact:5..20.......
    

}