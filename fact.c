#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("\n enter value ");
    scanf("%d",&n);
    for(i=1;i<+n;i++)
    {
        f=f*i;
    }
    printf("\n factorial is %d",f);
}
