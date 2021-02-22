#include<stdio.h>
void main()
{

    int n,i,j,k;
    printf("enter the no of rows in star");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*   ");
        }
        printf("\n");
    }
    for(i=n-1;i<=n;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*   ");
        }
        printf("\n");
    }
}
