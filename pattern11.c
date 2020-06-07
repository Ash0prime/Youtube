#include<stdio.h>
int main()
{
    int i,j,k;
    int min_stars=1;
    int p_ht=5;
    int p_space=p_ht-1;

    for(i=0;i<p_ht;i++)
    {
        for (j=p_space;j>i;j--)
        {
            printf(" ");
        }
        for (k=0;k<min_stars;k++)
        {
            printf("+");
        }
        //min_stars=min_stars+2;
        min_stars+=2;
        printf("\n");
    }

}