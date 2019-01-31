#include<stdio.h>
#include<conio.h>
void main()
{
    int i,l=0;
    scanf("%d",&i);
    while(i)
    {
        i=i/10;
        l++;
    }
    printf("%d",l);
    getch();
}
