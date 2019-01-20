#include<stdio.h>
#include<conio.h>
void main()
{
    int a,pw,p=1,i;
    scanf("%d%d",&a,&pw);
    for(i=0;i<pw;i++)
    {
        p=p*a;
    }
    printf("%d",p);
    getch();
}
