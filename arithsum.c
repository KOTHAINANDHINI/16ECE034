#include<stdio.h>
#include<conio.h>
void main()
{
    int N,A,D,i,b[10],sum=0;
    scanf("%d%d%d",&N,&A,&D);
    for(i=0;i<N;i++)
    {
        b[i]=A+i*D;
    }
    for(i=0;i<N;i++)
    {
        printf("%d",b[i]);
        sum=sum+b[i];
    }
    printf("\n");
    printf("%d",sum);
    getch();
}
