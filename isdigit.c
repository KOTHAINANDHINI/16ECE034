#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(isdigit(a))
        {
         printf("yes");
        }
    else
       {
        printf("no");
       }
    getch();
}
