#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b[10],i,k,l=0;
    scanf("%d",&a);
    i=0;
    while(a)
    {
        a=a/10;
        b[i]=a;
        i++;
        
    }
    for(k=0;k<i;k++)
    {
        if(b[i]!=0&&b[i]!=1)
        {
            l++;
        }
    }
    if(l==0)
    {
        printf("yes");
    }
    else
    {
    printf("no");
    }
    getch();
}
