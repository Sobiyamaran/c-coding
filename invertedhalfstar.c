#include<stdio.h>
void main()
{

    int n,i,j;

    printf("enter no of  rows in pyramid");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
