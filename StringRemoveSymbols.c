#include<stdio.h>
int main ()
{
int i,j;
char str[100],b[100];
printf("Enter the string: \n");
scanf("%s",&str);


for(i=0,j=0; str[i]!= '\0' ;i++)
{
    if(str[i]>= 'a' && str[i]<= 'z')
    {
        b[j] = str[i];
        j++;
    }
}
b[j] = '\0';
printf("The string is %s \n",b);
return 0;
}