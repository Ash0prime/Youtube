//wap to find the number is even or odd and if even then check is it divisible by 6 or not
//and if odd then check the number is divisible by 3 or 5?
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

    if (n%2==0)
    {
        //even
        if(n%6==0)
        {
            printf("The number is even and also divisible by 6");
        }
        else
        {
            printf("The number is even");
        }
        
    }
    else
    {
        //odd
        if(n%3==0)
        {
            printf("The number is odd and divisible by 3 also");
        }
        else if(n%5==0)
        {
            printf("The number is odd and also divisible by 5");
        }
        else
        {
            printf("The number is odd");
        }
        
    }
    
}