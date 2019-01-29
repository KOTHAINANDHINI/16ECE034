#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=0;
    for(i=0;i<n;i++)
    {
        b=b+a[i];
    }
    b=b/n;
        printf("%d",b);
    getch();
}
