#include<stdio.h>
int main()
{
    // wap to print fibonacci sequence
    //0 -> 1 -> 1 -> 2 -> 3 -> 5 -> 8.......
    int n,i,t1=0,t2=1,next;
    printf("ENter the value: ");
    scanf("%d",&n);

    printf("Fibonacci series \n");

    for (i=1;i<=n;++i)
    {
        printf("%d  ",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
    }

    //t1:0---1----1---2
    //t2:1---1----2---3
    //next:1---2---3
    //print: 0 1 1 2

}