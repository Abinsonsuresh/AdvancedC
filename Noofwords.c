#include<stdio.h>
#include<string.h>

int main ()
{
char str[100];
int flag =0;
int i,j,length;
printf("Enter the string \n");
gets(str);
length = strlen(str);
for(i=0;i<length;i++)
{
    if(str[i]!=' ' && str[i+1]==' ')
    {
        flag++;
    }
}
printf("The no. of words in the string is %d",flag + 1);
return 0;
}