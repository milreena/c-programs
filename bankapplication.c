#include <stdio.h>
#include<stdlib.h>
#include "bank.h"
void mainMenu()
{
    printf("\n banking app\n");
    printf("***********************\n");
    printf("1->add customer\n 2->remove customer\n 3->update customer\n 4->view all customer\n 5->find customer\n 6->exit\n");
    printf("select option\n");
}
void addcustomer(char file[])
{
    bank customer;
    FILE *fptr=fopen(file,"a");
    if(fptr==NULL)
    {
        printf("file creation error\n");
        return;
    }
    customer=getDetails();
    fwrite(&customer,sizeof(customer),1,fptr);
    fclose(fptr);
}
void viewcustomer(char file[])
{
    FILE *fptr=fopen(file,"r");
    bank customer;
    if(fptr==NULL)
    {
        printf("file creation error\n");
        return;
    }
    while(1)
    {
        fread(&customer,sizeof(customer),1,fptr);
        if(feof(fptr))break;
        printDetails(customer);
        fclose(fptr);
    }
    
}
bank *find_customer(char file[],int accno)
{
    FILE *fptr=fopen(file,"r");
    bank *customer=(bank*)malloc(sizeof(bank));
    while(1)
    {
        fread(customer,sizeof(bank),1,fptr);
        if(feof(fptr))break;
        if(customer->accno==accno)
        {
            return customer;
        }
    }
    fclose(fptr);
    return NULL;
}
int main()
{
    int choice;
    char filename[10];
    printf("enter file name\n");
    scanf("%s",filename);
    do{
        mainMenu();
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:addcustomer(filename);
            break;
            case 4:viewcustomer(filename);
            break;
            case 5:
            int accno;
            bank *customer;
            printf("enter account number\n");
            scanf("%d",&accno);
            customer=find_customer(filename,accno);
            if(customer!=NULL)
            {
                printDetails(*customer);
                
            }
            else
            printf("invalid account number");
        }
    }
    while(choice!=6);
    printf("thank you for being with us\n");
    return 0;
}
