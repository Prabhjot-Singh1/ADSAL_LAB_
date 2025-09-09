#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter value of a ");
    scanf("%d",&a);
    printf("Enter value of b ");
    scanf("%d",&b);

    //swapping numbers
    a=a+b;
    b=a-b;
    a=a-b;

    printf("Value of a is %d\n",a);
    printf("Value of b is %d",b);
    return (0);
}