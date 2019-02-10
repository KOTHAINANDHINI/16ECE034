#include<stdio.h>
#include<conio.h>
void main()
{
    char b[100];
    int i,j;
    scanf("%[^\n]",b);
    for(i=0;b[i]!='\0';i++)
    {
            if(b[0]>='a'&&b[0]<='z')
            {
                b[0]=b[0]-32;
            }
        if(b[i]==' ')
        {
            if(b[i+1]>='a'&&b[i+1]<='z')
            {
                b[i+1]=b[i+1]-32;
            }
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
    getch();
}
