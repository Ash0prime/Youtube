#include<stdio.h>
int main()
{
    //2,3,5,7 
    int a,i;
    int f=0;
    printf("ENter the number: ");
    scanf("%d",&a);
    /*
    a=12---->6
    i=2
    */
    i=2;
    while(i<=a/2)
    {
        if(a%i==0)
        {
            f=1;
            break;
        }
        i++;
    }

    if(f==0)
    {
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }


}