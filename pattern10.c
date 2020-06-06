#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf("%c",j+65);
        }
        printf("\n");

        //A=65
        //E=j+65=69
    }
}