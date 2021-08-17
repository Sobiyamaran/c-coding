#include<stdio.h>
void mergesort(int a,int first,int last)
{
    int mid;
    mid=(first+last)/2;
    mergesort(a,first,mid);
    mergesort(a,mid+1,last);
    merge(a,first,mid,last);
}
void merge(int a,int first,int mid,int last)
{
    int i,j,k,l;
    int temp[50];
    i=first;
    j=mid+1;
    k=first;
    while(i<=mid&&j<=last)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            i++;
        }
        else
        {
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=last)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    l=first;
    while(l<k)
    {
        a[l]=temp[l];
        l++;
    }

}
void main()
{
    int n,i;
    int a[50];
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    printf("sorted array\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
