#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char filename[10];
    printf("enter the file name:");
    scanf("%s",filename);
    fptr=fopen(filename,"r");
    if(fptr==NULL)
    {
    printf("%s does not exit",filename);
    exit(0);
    }
    while(1)
    {
        char ch=fgetc(fptr);
        if(ch=='Q')
        break;
        putc(ch,stdout);
    }
    fclose(fptr);
    return 0;
}
    


