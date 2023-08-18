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
void printDetails(bank customer)
{
   
    printf("account no:%d\n",customer.accno);
    printf("account name:%s\n ",customer.accname);
    printf("account balance:%.2f\n",customer.balance);
    
}
