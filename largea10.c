#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[10],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>c)
            {
                c=a[i];
            }
    }
        printf("%d",c);
    getch();
}
