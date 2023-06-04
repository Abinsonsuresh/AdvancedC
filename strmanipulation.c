#include<stdio.h>
#include<string.h>

int compare(char a[], char b[])
{
    int flag =0, i=0;
    while (a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
   char s[100],b[100];
   int i,j;
   char a[10] = "hello";

   printf("Enter the string \n");
   gets(s);

   for(i=0,j=0;s[i]!='\0';i++) 
   {
    if(s[i]>='a' && s[i]<='z')
    {
        b[j]=s[i];
        j++;
    }
   }
    b[j]='\0';
   printf("The string is %s \n",b);

   int con = compare(b,a);
   if(con==0)
   {
    printf("Hurrah \n");
   }

   return 0;
}