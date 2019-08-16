#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int AND=0, OR=0, XOR=0;
    int i=0,j=0;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(AND<(i&j)&&(i&j)<k)
            {
                AND=i&j;
            }
            if(OR<(i|j)&&(i|j)<k)
            {
                OR=i|j;
            }
            if(XOR<(i^j)&&(i^j)<k)
            {
                XOR=i^j;
            }
        }
    }

    printf("%d\n", AND);
    printf("%d\n", OR);
    printf("%d\n", XOR);

    return 0;
}
