#include<stdio.h>

int main()
{
    FILE *fptr;
    char filename[10];
    printf("enter file name:");
    scanf("%s",filename);
    fptr=fopen(filename,"r");
    if(fptr==NULL)
    {
    printf("%s does not exist",filename);
    return 0;
    }
    while(!feof(fptr))
    {
        char sentence[40];
        fgets(sentence,40,fptr);
        printf("%s",sentence);
    }
    fclose(fptr);
    return 0;
}
