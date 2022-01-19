#include <stdio.h>
#include <string.h>

int checkFlag(char* guess) {
    char flag[64] = "`bX_t^OeZHf]VZI^FpLdPYnBoEY^==z\n";

    for (unsigned i = 0; i < 100; i++) {
        flag[i % (strlen(flag) - 1)] += i % 5;
    }

    return 0 == strncmp(guess, flag, 64);
}

int main() {
    char guess[64];

    puts("Enter your guess:");
    fgets(guess, 64, stdin);

    if (checkFlag(guess) == 1) {
        puts("Correct! :)");
    } else {
        puts("Incorrect! :(");
    }
}
