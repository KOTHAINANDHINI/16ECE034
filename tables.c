#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,b,n;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        b=a*i;
    printf("%d\n",b);
    }
    getch();
}
