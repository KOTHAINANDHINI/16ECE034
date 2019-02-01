#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a^=b;
    b^=a;
    a^=b;
    printf("%d %d",a,b);
    getch();
}
