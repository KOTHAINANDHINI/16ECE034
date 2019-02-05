#include<stdio.h>
#include<conio.h>
void main()
{
    int L,B,H,ts,ar;
    scanf("%d%d%d",&L,&B,&H);
    ts=2*L*B+2*B*H+2*L*H;
    ar=L*B*H;
    printf("%d %d",ts,ar);
    getch();
}
