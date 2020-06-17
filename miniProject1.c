#include<stdio.h>
int main()
{
    int ch;
    int a,b;
    int i;
    printf("****************Menu to the use****************\n");
    printf("1.Menu\n");
    printf("2.Addition\n");
    printf("3.Subtraction\n");
    printf("4.Multiplication\n");
    printf("5.Division\n");
    printf("6.Table printing\n");
    printf("7.exit()\n");
    printf("************************************************\n\n");

    while(1){
        printf("Enter the choice : ");
    scanf("%d",&ch);
       

        switch (ch)
        {
        case 1:
            /* code */
            printf("****************Menu to the use****************\n");
            printf("1.Menu\n");
            printf("2.Addition\n");
            printf("3.Subtraction\n");
            printf("4.Multiplication\n");
            printf("5.Division\n");
            printf("6.Table printing\n");
            printf("7.exit()\n");
            printf("************************************************\n\n");
            break;
        
        case 2:
        printf("Addition\n");
            printf("Enter two numbers :");
            scanf("%d%d",&a,&b);

            printf("The summation of these two numbers is %d\n",a+b);
            break;

        case 3:
        printf("Subtraction\n");
            printf("Enter two numbers :");
            scanf("%d%d",&a,&b);

            printf("The difference of these two numbers is %d\n",a-b);
            break;

        case 4:
        printf("Multiply\n");
            printf("Enter two numbers :");
            scanf("%d%d",&a,&b);

            printf("The product of these two numbers is %d\n",a*b);
            break;
        
        case 5:
        printf("Division\n");
            printf("Enter two numbers :");
            scanf("%d%d",&a,&b);

            printf("The q of these two numbers is %d\n",a/b);
            printf("The r of these two numbers is %d\n",a%b);
            break;

        case 6:
        printf("Table printing\n");
            printf("Enter number :");
            scanf("%d",&b);

            for(i=1;i<=10;i++)
            {
                printf("%d * %d = %d\n",b,i,b*i);
            }
            break;

        case 7:
            exit(0);
            break;
        
        default:
        printf("Enter the valid option");
            break;
        }
    }


}