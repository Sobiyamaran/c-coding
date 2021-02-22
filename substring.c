
/*int length(char s[])
{
   char a[20];
   int length=0 ,i;
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]!='\0')
       {
           length++;
       }

   }
   // printf("%d",length);
    return length;
} */
#include<stdio.h>
int main()
{
    char s1[50];
    char s[50];
    int i,j,count=0,length=0;

    printf("enter the string\n");
    gets(s1);
     printf("enter the sub string\n");
    gets(s);
    //printf(s2);
   // len=length(s);
    for(i=0;s[i]!='\0';i++)
   {
           length++;

   }


    for(i=0;s1[i]!='\0';i++)
    {

     for(j=0;s[j]!='\0';j++)
     {
         if(s1[i+j]==s[j])

         {

            count++;
         }

      // printf("%c %c",s1[i+j],s[j]);
     }

    if(length==count)
     {
         printf("substring present");
         printf("first and last index is:%d,%d",i,i+j);
        // break;


     }
    else
        printf("not present");

       break;

    }
    return 0;

}
