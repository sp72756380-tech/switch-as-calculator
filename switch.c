#include<stdio.h>
int main ()
{
    int a,b;
    char ch;
    printf("enter two numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("enter any mathematical operator");
    scanf("%c",ch);
    switch(ch)
    {
        case'+': printf("%d",a+b);
        break;
        case'*': printf("%d",a*b);
        break;
        case'-': if(a>b)
        {
            printf("%d",a-b);
        }
        else
        {
            printf("%d",b-a);
        }
        break;
        default: printf("invalid input");
    }
    return 0;
}