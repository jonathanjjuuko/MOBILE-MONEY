#include <stdio.h>
int main() {
    int transactioncharge = 1000, pin, correctpin = 1500, i, reason;
    double balance = 500000000, newbalance, amount;

    printf("Enter amount: \n");
    scanf("%lf", &amount);

      for (i = 1; i <= 3; i++) {
        printf("Enter your PIN: \n");
        scanf("%d", &pin);
      if (pin == correctpin) {

          
  
printf("Success! you entered a correct pin Correct pin\n");
            printf("select reason for withdrawing the money\n1. school fees/ tution\n2.home expense\n");
            scanf("%d", &reason);

            printf("confirm your transaction\n1.yes\n2.No\n");
            scanf("%d", &reason);

      
            break;
            }
      
        else {
            
           printf("wrong pin, try again. you have %d attempts left\n", 3 - i);

        }

    }
                if (pin != correctpin) {
            printf("Sorry, you have used all your attempts,\n so your account is temporarily blocked.\n try again after 2 hours\n");
        return 0;
        }
        
        
          newbalance = balance -(amount + transactioncharge); 
                             balance = 5000000;
        if (amount > 0 && amount < (balance + transactioncharge)) {
            printf("Transaction successfull! \nyou have withdrawn %lf from your account\n", amount);
            printf("your remaining balance is %lf\n. ", newbalance);
        }
        else if (amount < 0) {
            printf("Dear customer you have entered invalid amount.\n Try again\n");

        }

        else {
            printf("Dear CUSTOMER you have insufficient balance.\n please deposit money on your account or borrow\n");
        }
           return 0;
           
        }

        

    


