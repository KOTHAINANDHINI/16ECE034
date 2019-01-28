#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i;
    scanf("%d",&a);
    b=1;
    for(i=0;i<a/2;i++)
    {
        b=b*2;
    }
    if(b==a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
