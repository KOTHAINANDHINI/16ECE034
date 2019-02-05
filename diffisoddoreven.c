#include<stdio.h>
#include<conio.h>
void main()
{
    int N,M,c;
    scanf("%d%d",&N,&M);
    c=N-M;
    if(c%2==0)
    printf("even");
    else
    printf("odd");
    getch();
}
