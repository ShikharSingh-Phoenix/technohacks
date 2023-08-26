#include <stdio.h>

double balance = 1000.0; // Initial balance

void displayMenu() {
    printf("ATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
}

void checkBalance() {
    printf("Your balance: $%.2lf\n", balance);
}

void deposit() {
    double amount;
    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);
    
    if (amount > 0) {
        balance += amount;
        printf("Deposit successful. Your new balance: $%.2lf\n", balance);
    } else {
        printf("Invalid amount.\n");
    }
}

void withdraw() {
    double amount;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);
    
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrawal successful. Your new balance: $%.2lf\n", balance);
    } else {
        printf("Invalid amount or insufficient balance.\n");
    }
}

int main() {
    int choice;

    printf("Welcome to the ATM!\n");
    
    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using the ATM!\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
