#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,f,i,j;
    scanf("%d%d",&a,&b);
    for(i>a;i<b;i++)
    {
        if(i>a&&i<b)
        {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d\t",i);
        }
        f=0;
        }
    }
    getch();
}
