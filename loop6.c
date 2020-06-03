#include<stdio.h>
int main()
{
    //count the number of digit in the Number inputed
    int n,i;
    int c=0;

    printf("Enter the value : ");
    scanf("%d",&n);

    //5463------ 4digit
    //i=5463----546---54---5----0
    //c=1---2---3---4----
    //

    for(i=n;i!=0;i/=10)
    {
        c++;
    }
    printf("Number : %d",c);

}