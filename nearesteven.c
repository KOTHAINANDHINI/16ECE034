#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    scanf("%d",&i);
        if (i>0)
        {
        if(i%2==0)
        printf("%d",i);
        else
        printf("%d",i-1);
        }
    getch();
}
