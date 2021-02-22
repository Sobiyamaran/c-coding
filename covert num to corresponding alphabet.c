#include<stdio.h>
void main()
{
    int n,r,q;
    printf("enter the number");
    scanf("%d",&n);
    if(n<27)
    {
        printf("%c",64+n);
    }
    else if(n>=27)
    {
      q=n/26;
      r=n%26;
      printf("%c%c",64+q,64+r);
    }
}
