#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char str[300];
float balance = 0.00;

// Carries out aauthentication
bool login(){
    int pin = 4567;
    int input_pin;

    printf("type in the pin to login:\n");
    for (int i = 0; i < 3; i++){

    // calculates the number of attempts left   
    int attempts_left = 2-i;
    scanf("%d", &input_pin);

    // Checks the length of the pin
    sprintf(str, "%d", input_pin);
    int length = strlen(str);

    if (pin == input_pin){
        return true;
        break;
    }
    else if (pin != input_pin && attempts_left > 0){
        // Prompts the user to enter the pin once more when still has more attempts remaining and that the pin is too long
        if (length < 4){
            printf("Incorrect pin, the pin is too short, you have %d attempts left, please try again\n", attempts_left);
        }

        // Prompts the user to enter the pin once more when still has more attempts remaining and that the pin is too long
        else if (length > 4){
            printf("Incorrect pin, the pin is too long, you have %d attempts left, please try again\n", attempts_left);
        }

        // Tells the user the pin is incorrect
        else{
            printf("Incorrect pin, you have %d attempts left, please try again\n", attempts_left);
        }
    }

    // Tells the user that there are no more attempts left
    else{
        printf("Too many attempts, please try again later\n");
    }
    }
}

// Prints the the ATM's menu
void display_menu(){
    printf("\033[1m====================\n      ATM MENU      \n====================\033[0m\n 1. Balance inquiry\n 2. Deposit\n 3. Withdraw\n 4. Exit\n\033[1m--------------------\033[0m\nSelect a choice\n");
}

// Prints the balance
void check_balance(){
    printf("Your balance is KSH %.2f\n", balance);
}

// does money deposition arithmetic
float make_deposit(){
            printf("How much would you like to deposit\n");
            float deposit;
            do{
                scanf("%f",&deposit);
                if (deposit < 0){
                    printf("invalid format, please try again\n");
                }
                else{
                    balance += deposit;
                    printf("you have deposited KSH %.2f, your current balance is KSH %.2f\n", deposit, balance);
                }
            }while (!(deposit >= 0));
}

// does money withdrawal arithmetic
float make_withdrawal(){
    printf("How much would you like to withdraw\n");
    float withdrawal;
         do{
            scanf("%f", &withdrawal);
            if (withdrawal < 0){
                printf("invalid format, please try again\n");
            }
            else{
                if(withdrawal <= balance){
                balance -= withdrawal;
                printf("You have withdrawn KSH %.2f, your current balance is KSH %.2f\n", withdrawal, balance);
                }
                else{
                    printf("You have insufficient funds to complete this transaction\n");
                }
            }
         }while(!(withdrawal >= 0));
}

int main() {
    if(login())
    {
        printf("Login successful\n");
        int choice;
        do{
        display_menu();
        scanf("%d",&choice);
        switch(choice){
        
        // balance inquiry
        case 1 :
            check_balance();
            break;
        
        // deposit
        case 2 :
            make_deposit();
            break;
        
        // withdrawal
        case 3 :
            make_withdrawal();
            break;
        
        // Exit
        case 4 :
            printf("Thank you for using our services\n");
            break;

        default:
            printf("Invalid choice!\n");
        }
        }while(choice != 4);
    }
    return 0;
}