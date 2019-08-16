#include<stdio.h>

void update(int *a,int *b)
{   int tmp;
    tmp=*a;
    *a=*a+*b;
    *b=tmp-*b;
    if(*b<0)
    {
        *b=(-1)*(*b);
    }
}


int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    update(&a,&b);
    printf("%d %d",a,b);

    return 0;
}
