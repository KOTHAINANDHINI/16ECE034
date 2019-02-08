#include<stdio.h>
#include<conio.h>
void main()
{
    int tc=3;
    int i=0,c[100];
    while(tc)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        
            c[i]=b-a;
            i++;
       tc--; 
    }
    int k;
    for(k=0;k<i;k++)
    {
        printf("%d\n",c[k]);
    }
    getch();
}
