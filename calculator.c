#include <stdio.h>
int main()
{
    int a,b,c;
    char ch;
    printf("press + for add\n");
    printf("press - for sub\n");
    printf("print * for multiply\n");
    printf("press / for division\n");
    printf("enter two numbers\n");
    scanf("%d,%d",&a,&b);
    printf("enter your choice");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':c=a+b;
                 break;
        case '-':c=a-b;
                 break;
        case'*':c=a*b;
                break;
        case'/':c=a/b;
                break;
    }
    printf("result id %D",c);
    
}

