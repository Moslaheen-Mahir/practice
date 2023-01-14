#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt","r");
    outputFile = fopen("log.txt","a");
    if(inputFile==NULL)
    {
        fprintf(outputFile, "File not found\n");
        return 0;
    }
    int year;
    fscanf(inputFile,"%d",&year);
    if(year% 400 == 0) fprintf(outputFile,"%d-->Yes\n",year);
    else if(year% 100 == 0) fprintf(outputFile, "%d-->No\n", year);
    else if(year % 4 == 0) fprintf(outputFile, "%d-->Yes\n",year);
    else fprintf(outputFile, "%d-->No\n",year);

    return 0;
}
