#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt","r");
    outputFile = fopen("output.txt","w");
    if(inputFile==NULL)
    {
        fprintf(outputFile,"File not found\n");
        return 0;
    }
    int t, n, sum=0;
    fscanf(inputFile,"%d",&t);
    for(int i=0;i<t;i++)
    {
        fscanf(inputFile,"%d",&n);
        sum = sum + (n%10);
    }
    fprintf(outputFile,"sum = %d",sum);

    return 0;
}
