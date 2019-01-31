#include<stdio.h>
#include<conio.h>
void main()
{
    int a,sum=0,i=0,rem;
    scanf("%d",&a);
    i=0;
    while(a)
    {
        rem=a%10;
        a=a/10;
       sum=sum+rem;
        i++;
    }
  printf("%d",sum);
    getch();
}
