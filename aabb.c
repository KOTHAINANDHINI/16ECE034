#include<stdio.h>
#include<conio.h>
void main()
{
    char a[10];
    int i,n,j,temp;
    gets(a);
    n=0;
    for(i=0;a[i]='\0';i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i%2==0&&j%2!=0)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            n++;
        }
            
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
    getch();
}
