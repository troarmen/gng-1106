#include <stdio.h>

#define ADMIN_PASSWORD 12345

#define OPT_RENEW_LICENCE 1
#define OPT_RENEW_STICKER 2
#define OPT_PAY_TICKET 3

#define MSG_RENEW_LICENCE "Go to Counter 5\n"
#define MSG_RENEW_STICKER "Go to Counter 8\n"
#define MSG_PAY_TICKET "Go to Counter 2\n"

#define ADMIN_TERMINATE 0
#define ADMIN_RETURN 1
#define ADMIN_RESET_RETURN 2

int admin(int count);

int main() {
    int selection;
    int customer_count = 0;
    int keep_running = 1;

    do {
        printf("Enter:\n");
        printf("1 to Renew Licence\n");
        printf("2 to Renew Sticker\n");
        printf("3 to Pay Parking Ticket\n");

        if (scanf("%d", &selection) != 1) {
            return 1;
        }

        if (selection == ADMIN_PASSWORD) {
            int admin_action = admin(customer_count);

            if (admin_action == ADMIN_TERMINATE) {
                keep_running = 0;
            } else if (admin_action == ADMIN_RESET_RETURN) {
                customer_count = 0;
            }
        } else if (selection == OPT_RENEW_LICENCE) {
            printf(MSG_RENEW_LICENCE);
            customer_count++;
        } else if (selection == OPT_RENEW_STICKER) {
            printf(MSG_RENEW_STICKER);
            customer_count++;
        } else if (selection == OPT_PAY_TICKET) {
            printf(MSG_PAY_TICKET);
            customer_count++;
        } else {
            printf("Invalid selection!\n");
        }

    } while (keep_running);

    return 0;
}

int admin(int count) {
    int admin_choice;

    do {
        printf("ADMIN MODE\n");
        printf("Number of customers = %d customer(s)\n", count);
        printf("Enter:\n");
        printf("0 to terminate the program.\n");
        printf("1 to return to customer mode\n");
        printf("2 to reset customer counter and return to customer mode.\n");

        if (scanf("%d", &admin_choice) != 1) {
            return ADMIN_TERMINATE;
        }

    } while (admin_choice < ADMIN_TERMINATE || admin_choice > ADMIN_RESET_RETURN);

    return admin_choice;
}