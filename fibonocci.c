//fibonocci
#include<stdio.h>
void main()
{

    int a=0,b=1,i,n,c;
    printf("enter the no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        b=a;
        a=c;
    }
}
