#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,l=0;
    scanf("%d%d",&a,&b);
    int t;
    t=b;
    while(t)
    {
        t=t/10;
        l++;
    }
    for(i=0;i<l;i++)
    {
      a=a*10;  
    }
    printf("%d",a+b);
    getch();
}
