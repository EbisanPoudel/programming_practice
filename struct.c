#include <stdio.h>

struct customer {
    long long int acc_no;
    char first_name[25];
    char last_name[25];
    long long int ph_no;
    long int deposit;
};

int main()
{
    int x;
    printf("How many customers?\t");
    if (scanf("%d", &x) != 1 || x <= 0) {
        printf("Invalid customer count!\n");
        return 1;
    }
    struct customer c[x];

    FILE *bank = fopen("customer.txt", "a+");
    if (bank == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n\t\t----- Enter Details -----\n");
    for(int i = 0; i < x; i++)
    {
        printf("\n\tCustomer %d :\n", i + 1);
        printf("\tAccount-No:\t");
        scanf("%lld", &c[i].acc_no);

        printf("\tFirst Name:\t");
        scanf(" %24s", c[i].first_name);

        printf("\tLast Name:\t");
        scanf(" %24s", c[i].last_name);

        printf("\tPhone-Number:\t");
        scanf("%lld", &c[i].ph_no);

        printf("\tDeposit-Amount:\t");
        scanf("%ld", &c[i].deposit);

        // Write 5 records per row to file
        fprintf(bank, "%lld %s %s %lld %ld\n", 
                c[i].acc_no, c[i].first_name, c[i].last_name, c[i].ph_no, c[i].deposit);      
    }

    // fflush forces pending written data from RAM buffer onto disk
    fflush(bank);

    // fseek rewinds the file pointer back to byte 0 (start of file) so we can read from top
    fseek(bank, 0, SEEK_SET);

    struct customer temp;
    
    printf("\n====================================================================================\n");
    printf("%-15s %-15s %-15s %-18s %-12s\n", 
           "Account No", "First Name", "Last Name", "Phone No", "Balance");
    printf("====================================================================================\n");
    
    // Read 5 formatted values per row from customer.txt
    while(fscanf(bank, "%lld %s %s %lld %ld", 
                 &temp.acc_no, temp.first_name, temp.last_name, &temp.ph_no, &temp.deposit) == 5)
    {
        printf("%-15lld %-15s %-15s %-18lld %-12ld\n", 
               temp.acc_no, temp.first_name, temp.last_name, temp.ph_no, temp.deposit);
    }
    printf("====================================================================================\n");

    fclose(bank);
    return 0;
}
