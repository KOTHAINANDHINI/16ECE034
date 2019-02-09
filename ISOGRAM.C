#include<stdio.h>
int main()
{
    int i,j,t;
    char a[100];
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                t++;
            }
        }
    }
    if (t>0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
    
}
