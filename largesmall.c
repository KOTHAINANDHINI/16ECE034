#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,n,t[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        t[i]=a[i];
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
        c=t[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<c)
            {
                c=a[i];
            }
        }
        printf(" %d",c);
    getch();
}
