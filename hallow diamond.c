#include<stdio.h>

int main(void) {
    int n,i,j,k;
    printf("enter the no of rows");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n/2;i++)
    {
        for(j=n/2;j>=i;j--)
          printf("* ");
        for(k=0;k<2*(i-1);k++)
            printf("  ");
        for(j=n/2;j>=i;j--)
          printf("* ");
        printf("\n");
    }

    for(i=n/2;i>=1;i--)
    {
        for(j=n/2;j>=i;j--)
            printf("* ");
        for(k=0;k<2*(i-1);k++)
            printf("  ");
        for(j=n/2;j>=i;j--)
            printf("* ");
        printf("\n");
    }

}
