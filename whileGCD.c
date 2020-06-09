//gcd:hcf
//12,8: 4
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the values: ");
    scanf("%d%d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }
    /*n1=12,n2=8
    n1=12-8 =4
    n1=4 n2=8
    n2=8-4=4


    n1=4  n2=4
    */
    printf("GCD: %d\n",n1);
    printf("GCD: %d\n",n2);
}