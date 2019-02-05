#include<stdio.h>
#include<conio.h>
void main()
{
    int a,sum=0,rem;
    scanf("%d",&a);
    if(a<=1000)
    {
    while(a)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    }
    printf("%d",sum);
    getch();
}
