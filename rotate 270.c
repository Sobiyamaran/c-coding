#include<stdio.h>
void main()
{
    int r,c,i,j,count;
    int a[50][50],temp[50][50];
    printf("enter row and column");
    scanf("%d %d",&r,&c);
    printf("enter the number");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=c-1;j>=0;j--)
    {
        for(i=0;i<r;i++)
        {
            temp[c-j-1][i]=a[i][j];
        }
    }
   /* for(i=0;i<r;i++)
    {
       for(j=0;j<c/2;j++)
       {
        //   for(i=0;i<r;i++)
   // {
         count=temp[i][j];
         temp[i][j]=temp[i][c-j-1];
         temp[i][c-j-1]=count;
       }
    } */
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",temp[i][j]);
        }
        printf("\n");
    }
}
