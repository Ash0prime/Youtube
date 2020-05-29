//wap to check the alphabet is vowel or consonant
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character value : ");
    scanf("%c",&c);

    if (c=='a'|| c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("The character is vowel");
    }
    else{
        printf("The character is consonent");
    }
}