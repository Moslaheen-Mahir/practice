#include<stdio.h>

int summation(int n)
{
    if(n==0) return 0;
    return summation(n-1) + n;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",summation(n));

    return 0;
}
