#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b[20],i=0,k,rem;
    scanf("%d",&a);
    i=0;
    while(a)
    {
        rem=a%10;
        a=a/10;
        b[i]=rem;
        i++;
    }
    for(k=i;k>=0;k--)
    {
        if(b[k]!=0)
        printf("%d\t",b[k]);
    }
    getch();
}
