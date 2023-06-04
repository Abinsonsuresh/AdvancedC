#include<stdio.h>
#include<string.h>

int main ()
{
char str[100];
int flag =0,upper=0,vowel=0;
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
printf("The no. of words in the string is %d \n",flag + 1);

for(i=0;i<length;i++)
{
    if(str[i]>='A' && str[i]<='Z')
    {
        upper++;
    }
}
printf("The no. of Upper Case in the string is %d \n",upper);

for(i=0;i<length;i++)
{
    if(str[i]>='a' || str[i]<='e' || str[i]<='i' || str[i]<='o' || str[i]<='u' ||
    str[i]>='A' || str[i]<='E' || str[i]<='I' || str[i]<='O' || str[i]<='U')
    {
        vowel++;
    }
}
printf("The no. of Vowels in the string is %d \n",vowel);
char newstr[100];
for(i=0,j=0;str[i]!='\0';i++)
{
    if(str[i]>='a' || str[i]>='A' && str[i]<='z' || str[i]<='Z')
    {
       newstr[j] = str[i];
       j++;
    }
}
newstr[j] = '\0';
int pun = length - strlen(newstr);
printf("The no. of Punctuations in the string is %d \n",pun);
return 0;
}