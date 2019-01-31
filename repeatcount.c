#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            k++;
        }
    }
    printf("%d",k);
    getch();
}
