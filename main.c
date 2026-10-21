#include<stdio.h>
int main(){
    int balance=100000,amount,choice;
    printf("\n 1.deposit\n 2.withdraw \n 3.balance");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter amount to deposit:");
        scanf("%d",&amount);
        balance=balance+amount;
        printf("Deposit successful your balance=%d",balance);
        break;
        
        case 2:
        printf("Enter amount to withdraw:");
        scanf("%d",&amount);
        if(balance-amount>500)
        {
            balance=balance-amount;
            printf("Amount debited,your balance=%d",balance);
        }
        else
        printf("Insufficient balance");
        break;
        case 3:
        printf("Balance amount=%d",balance);
        break;
        default:
        printf("\n Invalid option");
        break;
    }
}