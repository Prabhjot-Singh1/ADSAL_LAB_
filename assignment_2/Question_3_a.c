#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{

    char s[100];
    printf("Enter a string ");
    fgets(s,sizeof(s),stdin);

    int h=strlen(s)-1;
    for(int i=0;i<strlen(s)/2;i++)
    {
        char temp=s[i];
        s[i]=s[h];
        s[h]=temp;
        h--;

    }

    printf("The reverse of your string is %s",s);

    
    return 0;
}
