#include<stdio.h>
#include<conio.h>
void main()
{
    int a,sum=0,rem,temp;
    scanf("%d",&a);
    temp=a;
    if(a<=1000)
    {
    while(a)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    }
    if(temp==sum)
    printf("yes");
    else
    printf("not");
    getch();
}
