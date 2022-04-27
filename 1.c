

#include <stdio.h>

int main()
{
int  bill_amount, amount_given, quot, rem;

   printf("Enter bill_amount: ");
   scanf("%d", & bill_amount);

   printf("Enter amount_given: ");
   scanf("%d", &amount_given);

  
   quot =  amount_given/bill_amount;


   rem = amount_given%bill_amount;

   printf("Quotient is: %d\n", quot);
   printf("Remainder is: %d", rem);


    return 0;
}
