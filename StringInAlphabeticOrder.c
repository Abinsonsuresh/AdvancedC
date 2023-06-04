#include<stdio.h>
#include<string.h>

int main ()
{

int i,j,num;
char str[100][100], s[100];

printf("Enter the no. of names \n");
scanf("%d", &num);

printf("Enter the names \n");

for(i=0;i<num;i++)
{
    scanf("%s",&str[i]);
}

printf("The names are:  \n");

for(i=0;i<num;i++)
{
    printf("%s \n",str[i]);
}

for(i=0;i<num;i++)
{
    for(j=i+1;j<num;j++)
    {
        
       if( strcmp(str[i],str[j])  > 0)
       {
        strcpy(s,str[i]);
        strcpy(str[i],str[j]);
        strcpy(str[j],s);

       }
    }
}
printf("Acording to alphabetical order");
for(i=0;i<num;i++)
{
    printf("%s \n",str[i]);
}
return 0;
}