#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n=10,i,c;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<c)
        c=a[i];
    }
    printf("%d",c);
    getch();
}
