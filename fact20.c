#include<stdio.h>
#include<conio.h>
void main()
{
    int N,i,b=1;
    scanf("%d",&N);
    if(N<=20)
    {
    for(i=1;i<=N;i++)
    {
        b=b*i;
    }
    printf("%d",b);
    }
    else
    {
        printf("0");
    }
    getch();
}
