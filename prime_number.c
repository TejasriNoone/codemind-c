#include<stdio.h>
int main()
{
    int n,i=1,fact=0;
    scanf("%d", &n);
    while(i<=n)
    {
        if(n%i==0)
        {
            fact=fact+1;
        }
        i++;
    }
    if(fact==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}