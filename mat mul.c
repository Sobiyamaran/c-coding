#include<stdio.h>
void main()
{
    int a[50][50],b[50][50],mul[50][50];
    int r1,c1,r2,c2;
    int i,j,k;
    printf("enter the r and c");
    scanf("%d %d",&r1,&c1);
    printf("enter first matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the r and c");
    scanf("%d %d",&r2,&c2);
    printf("enter sec matrix");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d %d",&b[i][j]);
        }
    }
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                mul[i][j]=0;
                for(k=0;k<c2;k++)
                {
                     mul[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

    }
    else
        printf("matric cannot be multiple");
    printf("matric multiplication");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",mul[i][j]);

        }
        printf("\n");
    }


}
