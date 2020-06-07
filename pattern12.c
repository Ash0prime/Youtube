#include<stdio.h>
int main()
{
    int p_ht=4;
    int width=(p_ht*2)-1;
    int p_space=p_ht-1;
    int i,j,k;


    for(i=p_ht;i>=1;i--)
    {
        for(j=p_space;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=width;k++)
        {
            printf("%d",width);
        }
        width-=2;
        printf("\n");
    }
    
}