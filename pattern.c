#include<stdio.h>
#include<stdbool.h>
void displaypattern(int pattern[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d",pattern[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
bool checkpattern(int enterpattern[2][2],int predifinedpattern[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(enterpattern[i][j]!=predifinedpattern[i][j])
            return false;
        }
    }
    return true;
}
int main()
{
    int predifinedpattern[2][2]={{1,2},{3,4}};
    int enterpattern[2][2];
    int k=1;
    while(k<3)
    {
    printf("enter pattern\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&enterpattern[i][j]);
        }
    }
    displaypattern(enterpattern);
    while()
    {
        
            printf
        }
    }
    if(checkpattern(enterpattern,predifinedpattern))
    {
        printf("unlock\n");
        break;
    }
    else
    {
       printf("locked,try again\n");
    } 
    return 0;
    
}

    
    
    


