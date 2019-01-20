#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,c=0,k,a[5];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    if(k<n)
    {
    for(i=0;i<k;i++)
    {
        c=c+a[i];
    }
        printf("%d",c);
    }
    else
    {
        printf("not possible");
    }
    
    getch();
}
