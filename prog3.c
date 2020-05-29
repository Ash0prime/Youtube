//wap to find the largest and minimum number among 3 numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    int larg,min;
    printf("Enter the 3 variables : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a>b && a>c)
    {
        larg=a;
    }
    else if(b>a && b>c)
    {
        larg=b;
    }
    else
    {
        larg=c;
    }
    //*********************************************************
    if (a<b && a<c)
    {
        min=a;
    }
    else if(b<a && b<c)
    {
        min=b;
    }
    else
    {
        min=c;
    }

    printf("largest number is : %d ",larg);
    printf("minimum number is : %d",min);

}