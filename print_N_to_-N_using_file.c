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
    int t, n;
    fscanf(inputFile, "%d", &t);
    for(int i=0;i<t;i++)
    {
        fscanf(inputFile, "%d", &n);
        if(n<0)
        {
            for(int j=n;j<=(-n);j++)
            {
                fprintf(outputFile, "%d ", j);
            }
            fprintf(outputFile, "\n");
        }
        else if(n>0)
        {
            for(int j=n;j>=(-n);j--)
            {
                fprintf(outputFile, "%d ", j);
            }
            fprintf(outputFile,"\n");
        }
    }
    return 0;
}
