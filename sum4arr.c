#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],N,n=0,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        n=n+a[i];
    }
    printf("%d",n);
    getch();
} 
