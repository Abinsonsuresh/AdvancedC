#include<stdio.h>
#include<string.h>
int main ()
{
int i=0,flag = 0;
char a[100];
printf("Enter the string small ltr\n");
gets(a);

printf("The string entered is: ");
puts(a);
int length = strlen(a);

// while(a[i] != '\0')
// for(i;i<a[i];i++)
for(i;i<length;i++)

{
    if(a[i] == 'a' || a[i] == 'e' ||a[i] == 'i' ||a[i] == 'o' ||a[i] == 'u' )
    {
        flag++;
        // b[i] = a[i];
        // i++;
    }
}

printf("The no. of vowels in the string is %d \n",flag);


return 0;
}