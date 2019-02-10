#include<stdio.h>
#include<conio.h>
void main()
{
    int B,pw,p=1,i;
    scanf("%d%d",&B,&pw);
    for(i=0;i<pw;i++)
    {
        p=p*B;
    }
    printf("%d",p);
    getch();
}
