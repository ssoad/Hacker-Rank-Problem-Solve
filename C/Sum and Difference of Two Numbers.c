#include<stdio.h>

void main()
{
    int n1,n2;
    double d1,d2;
    scanf("%d %d",&n1,&n2);
    scanf("%f %f",&d1,&d2);
    printf("%d %d",n1+n2,n1-n2);
    printf("%lf %lf",d1+d2,d1-d2);
}
