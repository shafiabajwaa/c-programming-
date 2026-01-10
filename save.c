#include <stdio.h>

int main(void) {
    FILE *cfPtr; // file pointer for clients.txt

    // Open the file in read mode
    if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
        puts("File could not be opened");
        return 1; // exit program if file can't be opened
    }

    unsigned int request; // user's menu choice

    // Display menu and read request
    printf("Enter request\n"
           " 1 - List accounts with zero balances\n"
           " 2 - List accounts with credit balances\n"
           " 3 - List accounts with debit balances\n"
           " 4 - End of run\n? ");
    scanf("%u", &request);

    // Process requests until user chooses 4 (End)
    while (request != 4) {
        unsigned int account;
        char name[30];
        double balance;

        // Reset file pointer to beginning before reading
        rewind(cfPtr);

        switch (request) {
            case 1: // Zero balances
                puts("\nAccounts with zero balances:");
                // Read each record until EOF
                while (fscanf(cfPtr, "%u %29s %lf", &account, name, &balance) == 3) {
                    if (balance == 0.0) {
                        printf("%-10u%-13s%7.2f\n", account, name, balance);
                    }
                }
                break;

            case 2: // Credit balances (negative balances)
                puts("\nAccounts with credit balances:");
                while (fscanf(cfPtr, "%u %29s %lf", &account, name, &balance) == 3) {
                    if (balance < 0.0) {
                        printf("%-10u%-13s%7.2f\n", account, name, balance);
                    }
                }
                break;

            case 3: // Debit balances (positive balances)
                puts("\nAccounts with debit balances:");
                while (fscanf(cfPtr, "%u %29s %lf", &account, name, &balance) == 3) {
                    if (balance > 0.0) {
                        printf("%-10u%-13s%7.2f\n", account, name, balance);
                    }
                }
                break;

            default:
                puts("Invalid request! Enter 1, 2, 3, or 4.");
        }

        // Ask for next request
        printf("\n? ");
        scanf("%u", &request);
    }

    puts("End of run.");

    fclose(cfPtr); // close the file
    return 0;
}

