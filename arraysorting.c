#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],temp,i,j,p,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=n/2;
    temp=a[p-1];
    for(i=0;i<n;i++)
    {
        if(a[i]<a[p-1])
        {
            temp=a[p-1];
            a[p-1]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    getch();
}
