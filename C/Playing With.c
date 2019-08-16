#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char c;
    char s[100];
    char s1[1000];

    scanf("%c",&c);
    getchar();
    scanf("%[^\n]%*C",s);
    scanf("%[^\n]%*C",s1);

    printf("%c",c);
    printf("\n%s",s);
    printf("\n%s",s1);

    return 0;
}

