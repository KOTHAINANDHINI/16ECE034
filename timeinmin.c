#include<stdio.h>
#include<conio.h>
void main()
{
    int n,h,m;
    scanf("%d",&n);
    h=n/60;
    m=n%60;
    printf("%d %d",h,m);
    getch();
}
