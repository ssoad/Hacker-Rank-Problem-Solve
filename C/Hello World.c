#include<stdio.h>

void main()
{
    char a[100];
    scanf("%[^\n]%*c",a);
    printf("Hello, World!\n");
    printf("%s",a);

}
