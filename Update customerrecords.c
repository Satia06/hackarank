#include<stdio.h>

void readinput(int i);
void writeoutput(int i);

struct date{
  int month;
  int day;
  int year;
};
 
stuct account{
   char name[80];
   char street[80];
   char city[80];
   int acct_no;
   char acct_type;
   float oldbalance;
   float newba;ance;
   struct date lastpayment;
}customer[100];

main()
{
   int i,n;
   printf("CUSTOMER BILLING SYSTEM\n\n");
   printf("How many customers are there\n")
   scanf("%d",&n);
   for(i = 0(;i<n;++i){
       read input(i);
       if (customer[i].payment > 0){
           customer[i].acct_type = (customer[i].payment < 0.1 * customer[i]oldbalance) ? 'O': 'C';
      }
      else{
           customer[i].acct_type = (customer[i].oldbalance > 0) ? 'D' : 'C';
      }
    customer[i].newbalance = customer[i].oldbalance - customer[i].payment;
   }
  for(i =0;i<n;++i){
  writeoutput(i);
  } 


void readinput(int i)
{
   printf("\n Customer no.%d\n", i+1);
   printf("name :");
   scanf("%[^\n]",customer[i].name)
   printf("Street:");
   scanf("%[^\n]",customer[i].street);
   printf("city:");
   scanf("%[^\n]",customer[i].city);
   printf("Account number:");
   scanf("%d",customer[i].acct_no);
   printf("Previous balance: ");

   scanf("%f",customer[i].oldbalance;
   printf("Current balance:");
   scanf("%f",customer[i].newbalance);
   printf("payment date(mm/dd/yyyy:");

   scanf("%d%d%d", &customer[i].lastpayment.month,&customer[i].lastpayment.day,&customer[i].lastpayment.year);
   return;
}

void writeouput(int i)

{
        printf("\nName: %s", customer[i].name);
        printf ('I Account number: %d\n", customer[i].acct~no);
	printf("Street: %s\n", customer[i].street);
	printf("City: %s\n\n", customer[i].city);
	printf("0ld balance: %7.2fU, customer[i].oldbalance);
	printf(" Current payment: %7.2fH, customer[i].payment);
	printf(" New balance: %7.2f\n\n1', customer[i].newbalance);
	printf("Account status: ");

        switch(customer[i].acct_type) {
        case'C':
                  printf("Current\n");
                  break;
        case'O':
	         printf("Overdue\n");
                 break;

        case'D':
                 printf("Delinquent\n");
                 break;

      }
      return;
}
   

