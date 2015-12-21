#include <stdio.h>

#define RESPONSE_STRING_SIZE 127

void welcome_user_msg(char *name, char *response) {
    snprintf(response, RESPONSE_STRING_SIZE, "Welcome, %s!\nHow are you?\n", name);
}

int main() {

    char welcome_msg[RESPONSE_STRING_SIZE];

    // Hi, Heron
    welcome_user_msg("Heron", welcome_msg);
    printf("%s", welcome_msg);

    // Hi, Jason
    welcome_user_msg("Jason", welcome_msg);
    printf("%s", welcome_msg);

    return 0;
}
