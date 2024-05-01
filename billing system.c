#include<stdio.h>
int main()
{
  
  printf("---------------- WELCOME TO SMART BILLING SYSTEM -----------------");
  
  
  FILE *bill;
  bill=fopen("*billing.txt","a");

  float total,rate[10],amt[10],sum,gt=0;
  char item[10][100];
  int qty[10],i,n,j;

  printf("\n\nEnter total no.of items: ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      printf("\n\nEnter the name of item: ");
      scanf("%s",&item[i]);
      printf("Enter the rate of 1: ");
      scanf("%f",&rate[i]);
      fscanf(bill,"%*s %s %*s %*s ");
      //printf("%s",bill);
      printf("Enter the quantity: ");
      scanf("%d",&qty[i]);
      //scanf(bill, "%*s %*s %s %*s ");
      amt[i]=rate[i]*qty[i];
      printf("Amount: %.2f",amt[i]);
    }
  printf("\n\n-----------------------------------");
  printf("\n\t\t---groceries bill---");
  printf("\n--------------------------------------");
  printf("\n\n\nitem name\trate\t\tqty\tamount");

  printf(bill,"\n\n\nitem name\trate\t\tqty\tamount");
  
  
  for(i=0;i<n;i++)
    {
      printf("\n\n%s\t\t%.2f\t\t%d\t%.2f",item[i],rate[i],qty[i],amt[i]);
    
  printf(bill,"\n\n%s\t\t%.2f\t\t%d\t%.2f",item[i],rate[i],qty[i],amt[i]);
    }
  for(i=0;i<n;i++)
    {
      sum=sum+amt[i];
    }
  printf("\n\n------------------------------------");
  printf("\n\t\t\t\t Total=%.2f",sum);
      
}
