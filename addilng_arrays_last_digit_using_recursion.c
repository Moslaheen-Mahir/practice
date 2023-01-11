#include<stdio.h>

int summation(int n, int arr[])
{
    if(n==0) return 0;
    n--;
    return summation(n, arr+1)+arr[0]%10;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",summation(n,arr));

    return 0;
}
