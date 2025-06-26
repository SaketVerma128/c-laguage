#include <stdio.h>
#include <string.h>  // Needed for strcpy()

int main(void)
{
    typedef struct {
        int account_number;
        char account_type[20];
        char account_holder_name[40];
        double balance;
    } bank_customer;

    bank_customer bank_customers[5];

    // Assign values to the first customer
    bank_customers[0].account_number = 1001;
    strcpy(bank_customers[0].account_type, "Checking");
    strcpy(bank_customers[0].account_holder_name, "John Paul");
    bank_customers[0].balance = 2100.50;

    bank_customers[1].account_number = 1002;
    strcpy(bank_customers[1].account_type, "Savings");
    strcpy(bank_customers[1].account_holder_name, "Saket Verma");
    bank_customers[1].balance = 100000;

    // Optionally initialize the rest with default values
    for (int i = 2; i < 5; ++i) {
        bank_customers[i].account_number = 0;
        strcpy(bank_customers[i].account_type, "N/A");
        strcpy(bank_customers[i].account_holder_name, "N/A");
        bank_customers[i].balance = 0.0;
    }

    // Print all customers
    for (int i = 0; i < 5; ++i) {
        printf("Account Number: %d\n", bank_customers[i].account_number);
        printf("Account Type: %s\n", bank_customers[i].account_type);
        printf("Account Holder Name: %s\n", bank_customers[i].account_holder_name);
        printf("Balance: %.2lf\n", bank_customers[i].balance);
        printf("---------------------\n");
    }

    return 0;
}