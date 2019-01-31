#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,m,k=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            printf("yes");
            break;
        }
        else
            {
                k++;
            }
    }
    if(k==n)
    printf("no");
    getch();
}
