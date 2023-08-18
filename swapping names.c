#include <stdio.h>
#include<string.h>
int main()
{   

    char names[][20]={"sharadhi","miliyana","kathad","shamneer"};
    for(int i=0,j=3;i<2;i++,j--)
    {
        char temp[20];
        strcpy(temp,names[i]);
        strcpy(names[i],names[j]);
        strcpy(names[j],temp);
    }
    for(int i=0;i<4;i++)
    puts(names[i]);
    return 0;
}


