#include<stdio.h>
#include<string.h>
void main()
{
    char a[25],b[25],c[50];
    int i,count=0;
    printf("Enter string whoose length to be found:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("the length of the string %s is %d\n:",a,count);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]=a[i];
    printf("the source string\n:");
    printf("the copied string\n:");
    printf("enter the string to be concatenated \n:");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        c[i]='\0';
    }
    for(i=0;b[i]!='\0';i++)
    {
        c[i]=b[i];
        c[i]='\0';
        printf("\n the concatenated string is %s:",c);
    }
}

