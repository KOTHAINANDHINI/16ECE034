#include<stdio.h>
#include<conio.h>
void main()#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20],b[20],c[20],d[20];
    int i,j=0,l,k=0,m=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0||i%2==0)
        {
            b[j]=a[i];
            j++;
            
        }
        else
        {
            c[k]=a[i];
            k++;
            
        }
    }
    m=0;
    i=0;
    l=0;
    while(i!=j&&l!=k)
       {
           d[m]=c[l];
           m++;
           d[m]=b[i];
           m++;
           i++;
           l++;
       }
    for(i=0;i<m;i++)
    {
        printf("%c",d[i]);
    }
    getch();
}
{
    char a[20],b[20],c[20],d[20];
    int i,j=0,l,k=0,m=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0||i%2==0)
        {
            b[j]=a[i];
            j++;
            
        }
        else
        {
            c[k]=a[i];
            k++;
            
        }
    }
    m=0;
    for(i=0;i<j;i++)
    {
       for(l=0;l<k;l++)
       {
           d[m]=c[l];
           m++;
           d[m]=b[i];
           m++;
       }
    }
    for(i=0;i<m;i++)
    {
        printf("%c\n",d[i]);
    }
    getch();
}
