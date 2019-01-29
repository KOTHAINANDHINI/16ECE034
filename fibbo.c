#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    a=0;
    b=1;
    c=1;
    for(i=0;i<n;i++)
    {
        printf("%d",c);
        c=a+b;
        a=b;
        b=c;
    }
    getch();
}
