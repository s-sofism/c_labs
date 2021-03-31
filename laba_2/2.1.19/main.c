#include <stdio.h>
#include <math.h>

double AddToDeposit(double balance, double add_balance)
{
    return balance + add_balance;
}

double ViewBalance(double balance)
{
    return balance;
}

double CloseBalance()
{
    return 0;
}

double AfterDays(int days, double balance)
{
    if (days > 365)
    {
        balance = balance + balance * 0.1275;
    }
    else
    {
        balance = balance + balance * 0.010625 * (days / 30);
    }
    return balance;
}

int main(int argc, const char * argv[])
{
    int type;
    double balance = 0;
    double add_balance = 0;
    int days = 0;
    while (1)
    {
        printf("Enter:\n");
        printf("1 - Open deposit.\n");
        printf("2 - Add to deposit.\n");
        printf("3 - View balance.\n");
        printf("4 - View balance at that day.\n");
        printf("5 - Close deposit.\n");
        printf("6 - Bank information.\n");
        printf("7 - Exiting the program.\n");
        scanf("%d", &type);
        switch (type)
        {
            case 1:
                printf("Enter the amount of money >= 0:\n");
                while (scanf("%lf", &balance) != 1 || balance < 0)
                {
                    printf("Error, enter again\n");
                    while (getchar() != '\n')
                    {

                    }
                }
                printf("Successfull!\n");
                break;
            case 2:
                printf("Enter the amount of adding money >= 0:\n");
                while (scanf("%lf", &add_balance) != 1 || add_balance < 0)
                {
                    printf("Error, enter again\n");
                    while (getchar() != '\n')
                    {

                    }
                }
                balance = AddToDeposit(balance, add_balance);
                printf("Successfull!\n");
                break;
            case 3:
                printf("Balance = %lf\n", ViewBalance(balance));
                break;
            case 4:
                printf("Enter days >= 0\n", balance);
                while (scanf("%d", &days) != 1 || days < 0)
                {
                    printf("Error, enter again\n");
                    while (getchar() != '\n')
                    {

                    }
                }
                balance = AfterDays(days, balance);
                printf("New balance = %lf\n", balance);
                break;
            case 5:
                printf("Balance = %lf\n", ViewBalance(balance));
                balance = CloseBalance();
                printf("New balance = 0\n");
                break;
            case 6:
                printf("TransitBank program, v. 1.0\n");
                break;
            case 7:
                return 0;
            default:
                rewind(stdin);
                printf("Error, enter 1-7!\n");
        }
    }
    return 0;
}