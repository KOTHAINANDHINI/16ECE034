#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,k=0,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
            k++;
    }
    printf("%d",k);
    getch();
}
