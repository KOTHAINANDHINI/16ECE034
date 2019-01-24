
#include <stdio.h>
#include<conio.h>
void main()
{
    int a,b,f,i,j,l=0;
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
            l++;
        }
        f=0;
        }
    }
    printf("count=%d",l);
    getch();
}
