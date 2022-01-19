#include <stdio.h>

int checkFlag(char* guess) {
    if (guess[0] == 'f'
        && guess[1] == 'l'
        && guess[2] == 'a'
        && guess[3] == 'g'
        && guess[4] == '{'
        && guess[5] == '1'
        && guess[6] == 'n'
        && guess[7] == '5'
        && guess[8] == '3'
        && guess[9] == 'c'
        && guess[10] == 'u'
        && guess[11] == 'r'
        && guess[12] == '3'
        && guess[13] == '}'
        && guess[14] == '\0') {
            return 1;
    } else {
        return 0;
    }
}

int main() {
    char guess[32];

    puts("Enter your guess:");
    fgets(guess, 32, stdin);

    if (checkFlag(guess) == 1) {
        puts("Correct! :)");
    } else {
        puts("Incorrect! :(");
    }
}
