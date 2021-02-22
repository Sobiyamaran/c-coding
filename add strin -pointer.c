#include<stdio.h>

void main()
{
    char str1[50],str2[50];
    char   *s1, *s2;

    printf("enter the first string\n");
    gets(str1);
    printf("enter the second string\n");
    gets(str2);
    *s1=str1;
    *s2=str2;
    while(*s1)
         *s1++;
    while(*s2)
    {
        *s1=*s2;
        *s2++;
        *s1++;
    }


    printf("%s",str1);
}
