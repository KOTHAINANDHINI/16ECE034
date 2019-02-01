#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],i,m=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            m++;
        }
    }
    printf("%d",m);
    getch();
    
} 
