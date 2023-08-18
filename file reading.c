#include <stdio.h>
typedef struct bank{
    int accno;
    char accname[10];
    double balance;
}bank;
void printDetails(bank customer)
{
   
    printf("account no:%d\n",customer.accno);
    printf("account name:%s\n ",customer.accname);
    printf("account balance:%.2f\n",customer.balance);
    
}
int main()
{
    bank customer;
    FILE *fptr;
    char filename[10];
    printf("enter datebase name:");
    scanf("%s",filename);
fptr=fopen(filename,"r");
if(fptr==NULL)
{
    printf("file creation error");
    return 0;
}
