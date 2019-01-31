#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    i=a*b;
        if (i>0)
        {
        if(i%2==0)
        printf("even");
        else
        printf("odd");
        }
    getch();
}
