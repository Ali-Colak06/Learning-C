#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// This is an ATM application exersise.


// FUNCTIONS
char* login(); // Login process
void entrance(); // Entrance screen
char* choose_transaction(); // Choose transaction
void balance_inquiry(); // Balance inquiry
int cash_withdrawal(); // Cash withdrawal
int cash_deposit(); // Cash deposit
void exit_program(); // Exit from the program

// GLOBAL VARIABLES
char* password = "123"; // Login password
int users_money = 530; // User's initial money/balance

int main(){
    // VARIABLES
    char* password_input;
    char* transaction_input;
    int wrong_try = 0; // Wrong password attempt counter


password_prompt:
    password_input = login(); // Get password from user
    if (strcmp(password_input, password) == 0){   // If password is correct
        printf("Welcome!");
    }
    else{  // If password is wrong
        wrong_try += 1;  // Increase wrong password counter
        if (wrong_try < 4){
            printf("Wrong Password! Please try again\n");
            goto password_prompt; // Go back to password request
        }
        printf("You entered too many wrong attempts!");
        printf("\nSee you again...");
        exit(0); // Exit program due to too many wrong attempts
    }
    entrance(); // Call entrance screen

transaction_prompt:
    transaction_input = choose_transaction(); // Get transaction name/choice
    if (strcmp(transaction_input, "a") == 0){ // If transaction is balance inquiry
        balance_inquiry(); // Call balance inquiry function
    }
    else if (strcmp(transaction_input, "b") == 0){ // If transaction is cash withdrawal
        cash_withdrawal(); // Call cash withdrawal function
        printf("Your current balance is %d$\n", users_money);
    }
    else if (strcmp(transaction_input, "c") == 0){ // If transaction is cash deposit
        cash_deposit(); // Call cash deposit function
        printf("Your current balance is %d$\n", users_money);
    }
    else if (strcmp(transaction_input, "e") == 0){ // If transaction is exit
        exit_program(); // Call exit program function
    }
    else{
        printf("Wrong transaction Input! Please try again\n");
        goto transaction_prompt;
    }


    return 0;
}

char* login(){
    static char password_input[10] = "";
    printf("\nPlease enter your password:");
    scanf("%9s", password_input);
    return password_input;
}

void entrance(){
    printf("\n--------------------------------------------------------------------------------------");
    printf("\nWelcome to your bank account");
    printf("\n--------------------------------------------------------------------------------------");
}

char* choose_transaction(){
    static char transaction[5] = "";
    printf("\nPlease choose the transaction: \n-For Balance Inquiry --> a \n-For Cash Withdrawal --> b \n-For Cash Deposit --> c \n-For Exit --> e\n");
    scanf("%4s", transaction);
    return transaction;
}

void balance_inquiry(){
    printf("Your balance is %d$\n", users_money);
}

int cash_withdrawal(){
    int withdrawal_amount;
    printf("Please enter the amount of money you want to withdraw:\n");
    scanf("%d", &withdrawal_amount);
    if (withdrawal_amount <= users_money){
        users_money -= withdrawal_amount;
    }
    else printf("You can't withdraw %d$.\n", withdrawal_amount);
    return users_money;
}

int cash_deposit(){
    int deposit_amount;
    printf("Please enter the amount of money you want to deposit:\n");
    scanf("%d", &deposit_amount);
    users_money += deposit_amount;
    return users_money;
}

void exit_program(){
    printf("Exiting from the program...\n");
    exit(0);
}