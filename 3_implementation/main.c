#include<stdio.h>
#include<conio.h>
int main()
{
float draw,dep,transfer;
char name[24];
float balance=5000;
int account,account1,account2;
int type;
int transaction=1;
printf("\n\t\t\t\tBANKING SYSTEM\n\n");
printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\tWELCOME TO OUR YAQ BANKING SYSTEM\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
printf("Enter you name: ");
scanf("%s",&name);
printf("\nplease enter your account no.: ");
scanf("%d",&type);
while(transaction == 1)
{
int option;
printf("\nchoose what you want to do\n");
printf("1 - Balance Enquiry\n");
printf("2 - Deposit\n");
printf("3 - Withdraw\n");
printf("4 - transfer\n");
scanf("%d",&option);
