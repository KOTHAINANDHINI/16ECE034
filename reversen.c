#include<stdio.h>

int main() {
char a[100];
int i,k,l=0,n;
scanf("%d",&n);
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
    l++;
}
k=0;
for(i=l-1;i>=n;i--)
{
     printf("%c",a[i]);

}
return 0;
}
