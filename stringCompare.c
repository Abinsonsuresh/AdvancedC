#include<stdio.h>

int Compare(char a[], char b[])
{
    int i ,flag;
    while (a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]!=b[i]){
            flag = 1;
            break;
        }
        i++;
    }

    if(flag==0)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int main ()
{
    
char str[100],str2[100];

printf("Enter the string 1 \n");
// scanf("%s",&str);
gets(str);

printf("Enter the string 2 \n");
// scanf("%s",&str2);
gets(str2);

int con = Compare(str,str2);

if(con == 0)
{
    printf("Both the strings are equal \n");
}
else{
    printf("oops The strings are not equal \n");
}

return 0;
}