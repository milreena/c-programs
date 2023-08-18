#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *source,*target;
    char sourcefile[30],targetfile[30];
    printf(" source file:");
    scanf("%s",sourcefile);
    source=fopen(sourcefile,"r");
    if(source==NULL)
{
    printf("%s does not exist",sourcefile);
    exit(0);
}
char confirm;
do{
printf("target file:");
scanf("%s",targetfile);
if(access(targetfile,F_OK)!=0)
{
    printf("%s already exist");
    printf("want to overwrite[Y/N]?");
    confirm=getc(stdin);
}
else
break;
}while(confirm!='Y'||confirm!='y');
target=fopen(targetfile,"w");
while((confirm=fgetc(source))!=EOF);
PRINTF("%s")
}

