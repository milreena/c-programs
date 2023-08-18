#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char filename[ 20];
    scanf("%s",filename);
    fptr=fopen(filename,"w");
    if(fptr==NULL)
    {
    printf("FILE creation errorr");
    exit(0);
    }
    while(1)
    {
        char ch;
        ch=getc(stdin);
        if(ch=='Q')
        break;
        fputc(ch,fptr);
    }
    printf("%s file saved !",filename);
    fclose(fptr);
    return 0;
}
