#include<stdio.h>
#include<conio.h>
void main()
{
    int N,i,t,sum=0,rem;
    scanf("%d",&N);
    t=N;
    while(t)
    {
        rem=t%10;
        sum=sum*10+rem;
        t=t/10;
    }
    printf("%d",sum);
    getch();
}
