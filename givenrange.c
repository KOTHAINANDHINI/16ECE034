#include<stdio.h>
#include<conio.h>
void main()
{
    int i,L,R,N;
    scanf("%d%d%d",&N,&L,&R);
    for(i>L;i<R;i++)
    {
        if(i==N)
        {
            printf("yes");
        }
    }
    getch();
}
