//PROGRAM FOR A VIRTUAL ATM MACHINE
#include <stdio.h>

int e = 20000;
int t = 1;
int amount;
int cash;
double balance = 10000;
int airtime;
int pin;
char choice;
char name[50];
int operation;
char isp;
int utility;
char transaction;


int main() {


    printf("*****WELCOME TO VIRTUAL ATM*****\n");

    printf("ENTER YOUR NAME\n");
    gets(name);


    printf("PLEASE ENTER YOUR SECRET PIN\n");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("pin incorrect\n");
    }

    while (pin != 1234) {
        printf("WELCOME TO VIRTUAL ATM\n");
        printf("PLEASE ENTER YOUR SECRET PIN\n");
        scanf("%d", &pin);
    }


    printf("WELCOME %s\n", name);
do {
    printf("*****SELECT AN OPERATION TO PERFORM***** \n\n");
    printf("1. Check Balance                               2. Withdraw\n");
    printf("3. Recharge                                    4. Pay Bills\n");

    printf("enter\n");
    scanf("%d", &operation);

    switch (operation) {
        case 1: //check balance
            printf("Available Balance:%.2f\n", balance);
            break;

        case 2: //withdrawal
     //   do {
            printf("*****select an amount*****\n");
            printf("a. 500                              b. 1000\n");
            printf("c. 5000                             d. 10000\n");
            printf("e. 20000                            f. other amounts\n\n");

            printf("enter\n");
            scanf("%s", &choice);
            //this is under case2
            switch (choice) {
                case 'a':
                    if (choice < balance) {
                        printf("Take your cash\n");
                    }
                    else {
                      printf("insufficient funds\n");
                    }
                    break;
                case 'b':
                    if (choice < balance) {
                        printf("Take your cash\n");
                    }
                    else {
                        printf("insufficient funds\n");
                    }
                    break;
                case 'c':
                    if (choice < balance) {
                        printf("Take your cash\n");
                    }
                    else {
                        printf("insufficient funds\n");
                    }
                    break;
                case 'd':
                    if (choice < balance) {
                        printf("Take your cash\n");
                    }
                    else {
                        printf("insufficient funds\n");
                    }
                    break;
                case 'e':
                    if (e < balance) {
                        printf("Take your cash\n");
                    }
                    else {
                        printf("insufficient funds\n");
                    }
                    break;
                case 'f':
                    printf("Enter an amount\n");
                    scanf("%d", &cash);
                    if (cash < balance) { printf("Take your cash\n"); }
                    else { printf("insufficient funds\n"); }
                    break;
                default:
                    printf("Invalid operation\n");
                    break;
            }

       // }while(cash > balance);
            break;
        case 3: //Recharge
            do {
                    printf("*****select network*****\n\n");
                    printf("a. MTN                              b. GLO\n");
                    printf("c. AIRTEL                           d. ETISALAT\n");

                    printf("enter\n");
                    scanf("%s", &isp);
                    switch(isp) {
                        case 'a':
                            printf("enter amount\n");
                            scanf("%d", &airtime);
                            break;
                        case 'b':
                            printf("enter amount\n");
                            scanf("%d", &airtime);
                            break;
                        case 'c':
                            printf("enter amount\n");
                            scanf("%d", &airtime);
                            break;
                        case 'd':
                            printf("enter amount\n");
                            scanf("%d", &airtime);
                            break;
                        default:
                            printf("invalid operation\n");
                           break;
                    }

              if(airtime>balance)
                  printf("insufficient funds\n");
              else
                  printf("transaction successful\n");

            } while (airtime > balance);
            break;

        case 4: // pay other bills

        do {
            printf("1. DSTV                                         2. GOTV\n");
            printf("3. EEDC                                         4. BETNAIJA\n");
            printf("5. LONGRICH                                     6. INSURANCE\n");

            printf("enter\n");
            scanf("%d", &utility);
            switch(utility) {
                case 1:
                    printf("enter amount\n");
                    scanf("%d", &amount);
                    if (amount <= balance) {
                        printf("transaction successful!\n");
                    } else {
                        printf("insufficient funds\n");
                    }
                    break;

                case 2:
                    printf("enter amount\n");
                    scanf("%d", &amount);
                    if (amount <= balance) {
                        printf("transaction successful!\n");
                    } else {
                        printf("insufficient funds\n");
                    }
                    break;

                case 3:
                    printf("enter amount\n");
                    scanf("%d", &amount);
                    if (amount <= balance) {
                        printf("transaction successful!\n");
                    } else {
                        printf("insufficient funds\n");
                    }
                    break;

                case 4:
                    printf("enter amount\n");
                    scanf("%d", &amount);
                    if (amount <= balance) {
                        printf("transaction successful!\n");
                    } else {
                        printf("insufficient funds\n");
                    }
                    break;

                case 5:
                    printf("enter amount\n");
                    scanf("%d", &amount);
                    if (amount <= balance) {
                        printf("transaction successful!\n");
                    } else {
                        printf("insufficient funds\n");
                    }
                    break;

                case 6:
                    printf("enter amount\n");
                    scanf("%d", &amount);
                    if (amount <= balance) {
                        printf("transaction successful!\n");
                    } else {
                        printf("insufficient funds\n");
                    }
                    break;

                default:
                    printf("invalid operation\n");
                    break;
            }


    } while(amount > balance);
            break;

        default:
            printf("invalid operation\n");
            break;
    }

    printf("\n\n\nDo you wish to perform another transaction \n");
    printf("y or n\n");
    //fflush(stdin);
    scanf("%s", &transaction);

    if(transaction == 'y')
    {
        t == 1;
    }
    else
    {
        t == 0;
        break;
    }

} while(t==1);
printf("THANKS FOR USING VIRTUAL ATM MACHINE");


    }
