#include<stdio.h>
#include<stdbool.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt","r");
    outputFile = fopen("output.txt","w");
    if(inputFile==NULL)
    {
        printf("File not found\n");
        return 0;
    }
    while(true)
    {
        char ch = fgetc(inputFile);
        if(ch==EOF)
        {
            break;
        }
        fputc(ch, outputFile);
    }
    return 0;
}
