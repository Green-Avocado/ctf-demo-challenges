#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define FLAG_LEN 32

char flag[FLAG_LEN];

void win() {
    FILE* flagfile = fopen("flag.txt", "r");

    if (flagfile == NULL) {
        puts("Error: flag.txt does not exist, contact an admin!");
        exit(1);
    }

    fgets(flag, FLAG_LEN, flagfile);
    puts(flag);
}

void vuln() {
    char name[8] = {0};
    char role[8] = "user";

    puts("Who are you?");
    gets(name);

    if (strncmp(role, "admin", 8) == 0) {
        puts("Access Granted");
        win();
    } else {
        puts("Access Denied");
    }
}

int main() {
    alarm(60);
    setbuf(stdout, NULL);
    setbuf(stdin, NULL);

    vuln();

    return 0;
}
