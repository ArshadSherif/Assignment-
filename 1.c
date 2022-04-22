

#include <stdio.h>

int main()
{
int  bill_amount, amount_given, quot, rem;

   printf("Enter bill_amount: ");
   scanf("%d", & bill_amount);

   printf("Enter amount_given: ");
   scanf("%d", &amount_given);

  
   quot =  bill_amount / amount_given;


   rem =  bill_amount% amount_given;

   printf("Quotient is: %d\n", quot);
   printf("Remainder is: %d", rem);


    return 0;
}
