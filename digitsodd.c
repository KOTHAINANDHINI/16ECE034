#include<stdio.h>
#include<conio.h>
void main()
{
    int a,l=0,k[100];
    scanf("%d",&a);
    l=a;
    int i=0;
    while(l!=0)
    {
        
        k[i]=l%10;
        l=l/10;
        i++;
        
    }
    int j;
    for(j=0;j<i;j++)
    {
        if(k[j]%2!=0)
        {
            printf(" %d",k[j]);
        }
        
    }
    getch();
}
