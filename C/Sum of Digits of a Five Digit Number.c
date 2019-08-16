#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,sum=0;
    for(i=0;n>0;n/=10)
    {
        sum+=(n%10);
    }
    printf("%d",sum);
    return 0;
}
