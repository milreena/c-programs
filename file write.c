#include <stdio.h>
typedef struct bank{
    int accno;
    char accname[10];
    double balance;
}bank;
bank getDetails()
{
    bank customer;
    printf("account no");
    scanf("%d",&customer.accno);
    printf("account name");
    scanf("%s",customer.accname);
    printf("account balance");
    scanf("%lf",&customer.balance);
    return customer;
    
}
int main()
{
    bank customer;
    FILE *fptr;
    char filename[10];
    printf("enter datebase name:");
    scanf("%s",filename);
fptr=fopen(filename,"a+");
if(fptr==NULL)
{
    printf("file creation error");
    return 0;
}
    customer=getDetails();
    fwrite(&customer,sizeof(customer),1,fptr);
    fclose(fptr);
}
