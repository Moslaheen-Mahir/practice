#include<stdio.h>

int  power(int n, int m)
{
    if(m==0) return 1;
    m--;
    return power(n,m)*n;
}

int main()
{
    int n, m;
    scanf("%d %d",&n,&m);
    printf("%d",power(n,m));
    return 0;
}
