#include<stdio.h>
#include<conio.h>
void main()
{
    int C,A,B,i,b[10],sum=0;
    scanf("%d%d%d",&A,&B,&C);
    for(i=0;i<C;i++)
    {
        b[i]=A+i*B;
    }
    for(i=0;i<C;i++)
    {
        sum=sum+b[i];
    }
    printf("%d",sum);
    getch();
}
