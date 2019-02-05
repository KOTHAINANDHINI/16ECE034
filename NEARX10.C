#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,b=1;
    scanf("%d",&a);
        for(i=0;;i++)
        {
            a++;
            if(a%10==0)
            {
                printf("%d",a);
                break;
            }
        }
    getch();
}
