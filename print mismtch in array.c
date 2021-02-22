#include<stdio.h>
void main()
{
    char  a[]={'a','b','c','d','e','f','g','h','i','\0'};
    char  b[]={'a','b','d','e','e','g','g','i','i','\0'};
    int i,j,n,m;
   /* printf("enter the no of char");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
        scanf("%c",&a[i]);
    printf("enter the no of elements in second array");
    scanf("%d",&m);
    printf("enter the elements");
    for(j=0;j<m;j++)
        scanf("%d",b[j]); */
    i=0;
    j=0;
    while(a[i]!='\0'&&b[i]!='\0')
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
        }
        else
        {
            printf("%c%c",a[i],b[j]);
            i++;
            j++;
            printf("\t");
        }
    }
    while(a[i]!='\0')
    {
        printf("%c",a[i]);
        i++;
    }
    while(b[j]!='\0')
    {
        printf("%c",b[j]);
        j++;
    }


}
