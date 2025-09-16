#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{

    char s[100];
    char ans[100];
    printf("Enter a string ");
    fgets(s,sizeof(s),stdin);

    int h=strlen(s)-1;
    for(int i=h;i>=0;i--)
    {
        ans[h-i]=s[i];

    }
    ans[h+1]='\0';

    printf("The reverse of your string is %s",ans);

    
    return 0;
}
